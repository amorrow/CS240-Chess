/* ChessDocParser.h
 * Subclasses Glib::Markup::Parser to parse
 * our custom Chess XML format.
 */

#ifndef _CS240CHESS_CHESS_DOC_PARSER_H
#define _CS240CHESS_CHESS_DOC_PARSER_H

#include <glibmm/markup.h>
#include "Game.h"

using namespace Glib;
using namespace Glib::Markup;

typedef enum
{
	StartState,
	InChessGameState,
	InBoardState,
	InHistoryState,
	InMoveState,
	InMoveAfterFirstPieceState,
	InMoveAfterSecondPieceState,
	InMoveAfterThirdPieceState,
	EndState,
} ChessDocParserState;

class ChessDocParser : public Parser
{
private:
	Game& game;
	ChessDocParserState state;
	Move move;
	void parsePiece(
			const AttributeMap& attributes,
			PiecePtr* outPiece,
			LocationPtr* outLocation);
	void parseChessGameState(const Glib::ustring& element_name);
	void parseBoardState(
			const Glib::ustring& element_name,
			const AttributeMap& attributes);
	void parseAfterFirstState(
			const Glib::ustring& element_name,
			const AttributeMap& attributes);
	void parseAfterSecondState(
			const Glib::ustring& element_name,
			const AttributeMap& attributes);
	void parseCloseBoardState(const ustring& element_name);
	void parseCloseHistoryState(const ustring& element_name);
	void parseCloseMove(const ustring& element_name);
protected:
	virtual void on_error(ParseContext& context, const MarkupError& error);
	virtual void on_start_element(
			ParseContext& context,
			const ustring& element_name,
			const AttributeMap& attributes);
	virtual void on_end_element(ParseContext& context, const ustring& element_name);
	virtual void on_text(ParseContext& context, const ustring& text);
public:
	ChessDocParser(Game& _game);
};

#endif

