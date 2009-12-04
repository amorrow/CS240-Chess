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

ChessDocParser::ChessDocParser(Game& _game) : Parser(), game(_game), state(StartState)
{}

void ChessDocParser::on_error(ParseContext& context, const MarkupError& error)
{
	g_debug("ChessDocParser::on_error");
}

void ChessDocParser::on_start_element(ParseContext& context, const Glib::ustring& element_name, const AttributeMap& attributes)
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
			throw MarkupError(MarkupError::INVALID_CONTENT, "<chessgame> may only contain <board> and <history>");
		}
	}
	else if (state == InBoardState)
	{
		if (element_name != "piece")
		{
			throw MarkupError(MarkupError::INVALID_CONTENT, "<board> may only contain <piece>");
		}
		PiecePtr newPiece;
		ustring type = attributes.find("type")->second;
		ChessColor color = (attributes.find("color")->second == "white" ? ChessColorWhite : ChessColorBlack);
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
		Location newLocation(row, col);
		game.board().insertPiece(newLocation, newPiece);
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
		default:
			break;
	}
}

void ChessDocParser::on_text(ParseContext& context, const Glib::ustring& text)
{
	g_debug("ChessDocParser::on_text");
}

