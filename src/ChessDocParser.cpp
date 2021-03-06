/* ChessDocParser.cpp */

#include "ChessDocParser.h"
#include <glib.h>

// Pieces
#include "Pawn.h"
#include "Rook.h"
#include "Knight.h"
#include "Bishop.h"
#include "Queen.h"
#include "King.h"

ChessDocParser::ChessDocParser(Game& _game) : Parser(), game(_game), state(StartState), move()
{}

void ChessDocParser::on_error(ParseContext& context, const MarkupError& error)
{
	g_debug("ChessDocParser::on_error");
}

void ChessDocParser::on_start_element(
		ParseContext& context,
		const Glib::ustring& element_name,
		const AttributeMap& attributes
									)
{
	g_debug("ChessDocParser::on_start_element");
	if (state == StartState)
	{
		if (element_name != "chessgame")
		{
			throw MarkupError(MarkupError::INVALID_CONTENT, "document must start with <chessgame> tag");
		}
		state = InChessGameState;
	}
	else if (state == InChessGameState)
	{
		parseChessGameState(element_name);
	}
	else if (state == InBoardState)
	{
		parseBoardState(element_name, attributes);
	}
	else if (state == InHistoryState)
	{
		if (element_name != "move")
		{
			throw MarkupError(MarkupError::INVALID_CONTENT, "<history> may only contain <move>");
		}
		state = InMoveState;
	}
	else if (state == InMoveState)
	{
		// first piece in a move
		PiecePtr piece;
		LocationPtr loc;
		parsePiece(attributes, &piece, &loc);
		this->move = Move(piece, *loc);
		state = InMoveAfterFirstPieceState;
	}
	else if (state == InMoveAfterFirstPieceState)
	{
		parseAfterFirstState(element_name, attributes);
	}
	else if (state == InMoveAfterSecondPieceState)
	{
		parseAfterSecondState(element_name, attributes);
	}
	else
	{
		throw MarkupError(MarkupError::INVALID_CONTENT, "no tags allowed after </chessgame>");
	}
}

void ChessDocParser::parseCloseBoardState(const ustring& element_name)
{
	if (element_name != "piece" && element_name != "board")
	{
		g_debug("bad close tag: %s", element_name.c_str());
		throw MarkupError(MarkupError::INVALID_CONTENT, "invalid close tag");
	}
	if (element_name == "board")
	{
		state = InChessGameState;
	}
}

void ChessDocParser::parseCloseHistoryState(const ustring& element_name)
{
	if (element_name != "history")
		throw MarkupError(MarkupError::INVALID_CONTENT, "invalid close tag");
	state = InChessGameState;
	// set the current player's turn
	// by looking at who took a turn last
	if (this->move.piece() != NULL)
	{
		ChessColor currentPlayer = (this->move.piece()->color() == ChessColorWhite
				? ChessColorBlack : ChessColorWhite);
		game.setCurrentPlayer(currentPlayer);
	}
}

void ChessDocParser::parseCloseMove(const ustring& element_name)
{
	if (element_name == "move")
	{
		// put the completed move into the history
		game.addToHistory(this->move);
		state = InHistoryState;
	}
}

void ChessDocParser::on_end_element(ParseContext& context, const ustring& element_name)
{
	g_debug("ChessDocParser::on_end_element");
	switch(state)
	{
		case StartState:
		case InChessGameState:
			state = EndState;
			break;
		case InBoardState:
			parseCloseBoardState(element_name);
			break;
		case InHistoryState:
			parseCloseHistoryState(element_name);
			break;
		case InMoveState:
		case InMoveAfterFirstPieceState:
		case InMoveAfterSecondPieceState:
		case InMoveAfterThirdPieceState:
		parseCloseMove(element_name);
				break;
		case EndState:
			throw MarkupError(MarkupError::INVALID_CONTENT, "no tags allowed after </chessgame>");
	}
}

void ChessDocParser::on_text(ParseContext& context, const Glib::ustring& text)
{
	g_debug("ChessDocParser::on_text");
}

//////////////////// Sub-parsing methods
void ChessDocParser::parsePiece(
		const AttributeMap& attributes,
		PiecePtr* outPiece,
		LocationPtr* outLocation)
{
	PiecePtr newPiece;
	ustring type = attributes.find("type")->second;
	ChessColor color =
		(attributes.find("color")->second == "white" ? ChessColorWhite : ChessColorBlack);

	if (type == "pawn")
	{
		newPiece = PiecePtr(new Pawn(color));
	}
	else if (type == "rook")
	{
		newPiece = PiecePtr(new Rook(color));
	}
	else if (type == "knight")
	{
		newPiece = PiecePtr(new Knight(color));
	}
	else if (type == "bishop")
	{
		newPiece = PiecePtr(new Bishop(color));
	}
	else if (type == "queen")
	{
		newPiece = PiecePtr(new Queen(color));
	}
	else if (type == "king")
	{
		newPiece = PiecePtr(new King(color));
	}
	else
	{
		g_debug("type: %s", type.c_str());
		throw MarkupError(MarkupError::INVALID_CONTENT, "invalid piece type");
	}

	int row = atoi(attributes.find("row")->second.c_str());
	int col = atoi(attributes.find("column")->second.c_str());
	LocationPtr newLocation(new Location(row, col));
	*outPiece = newPiece;
	*outLocation = newLocation;
}

void ChessDocParser::parseBoardState(
			const Glib::ustring& element_name,
			const AttributeMap& attributes)
{
	if (element_name != "piece")
	{
		throw MarkupError(MarkupError::INVALID_CONTENT, "<board> may only contain <piece>");
	}
	PiecePtr piece;
	LocationPtr loc;
	parsePiece(attributes, &piece, &loc);
	game.board().insertPiece(*loc, piece);
}

void ChessDocParser::parseChessGameState(const Glib::ustring& element_name)
{
	if (element_name == "board")
	{
		state = InBoardState;
	}
	else if (element_name == "history")
	{
		state = InHistoryState;
	}
	else
	{
		throw MarkupError(MarkupError::INVALID_CONTENT,
				"<chessgame> may only contain <board> and <history>");
	}
}

void ChessDocParser::parseAfterFirstState(
			const Glib::ustring& element_name,
			const AttributeMap& attributes)
{
	// second piece
	PiecePtr piece;
	LocationPtr loc;
	parsePiece(attributes, &piece, &loc);
	if (*piece != *(this->move.piece()))
	{
		throw MarkupError(MarkupError::INVALID_CONTENT,
				"the first two <piece>s in a <move> tag must be the same");
	}
	this->move.moveTo(*loc);
	state = InMoveAfterSecondPieceState;
}

void ChessDocParser::parseAfterSecondState(
			const Glib::ustring& element_name,
			const AttributeMap& attributes)
{
	// check that it's another piece tag
	// then take that piece
	if (element_name != "piece")
	{
		throw MarkupError(MarkupError::INVALID_CONTENT, "only <piece>s allowed inside a <move>");
	}
	PiecePtr piece;
	LocationPtr loc;
	parsePiece(attributes, &piece, &loc);
	if (*piece == *(this->move.piece()))
	{
		throw MarkupError(MarkupError::INVALID_CONTENT, "a piece may not take itself!");
	}
	move.take(piece);
	state = InMoveAfterThirdPieceState;
}

