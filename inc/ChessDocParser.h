/* ChessDocParser.h
 * Subclasses Glib::Markup::Parser to parse
 * our custom Chess XML format.
 */

#ifndef _CS240CHESS_CHESS_DOC_PARSER_H
#define _CS240CHESS_CHESS_DOC_PARSER_H

#include <glibmm/markup.h>
#include <string>

using namespace Glib;
using namespace Glib::Markup;

class ChessDocParser : public Parser
{
protected:
	virtual void on_error(ParseContext& context, const MarkupError& error);
	virtual void on_start_element(ParseContext& context, const Glib::ustring& element_name, const AttributeMap& attributes);
	virtual void on_text(ParseContext& context, const Glib::ustring& text);
public:
	ChessDocParser(std::string filename);
};

#endif

