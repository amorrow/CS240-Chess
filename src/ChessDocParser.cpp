/* ChessDocParser.cpp */

#include "ChessDocParser.h"
#include <glib.h>

ChessDocParser::ChessDocParser(Game& _game) : Parser(), game(_game), state(StartState)
{}

void ChessDocParser::on_error(ParseContext& context, const MarkupError& error)
{
	g_debug("ChessDocParser::on_error");
}

void ChessDocParser::on_start_element(ParseContext& context, const Glib::ustring& element_name, const AttributeMap& attributes)
{
	g_debug("ChessDocParser::on_start_element");
	if (state == StartState && element_name != "chessgame")
	{
		throw MarkupError(MarkupError::INVALID_CONTENT, "document must start with <chessgame> tag");
	}
}

void ChessDocParser::on_text(ParseContext& context, const Glib::ustring& text)
{
	g_debug("ChessDocParser::on_text");
}

