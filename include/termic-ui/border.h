#pragma once

#include <string_view>

using namespace std::literals::string_view_literals;


namespace termic
{

using Border = std::uint32_t;

namespace border
{

enum
{
	None,
	Basic,
};

};

static std::string_view border_chars[6][6] = {
	{ "┌"sv, "┐"sv, "└"sv, "┘"sv, "─"sv, "│"sv },
	{ "┏"sv, "┓"sv, "┗"sv, "┛"sv, "━"sv, "┃"sv },
	{ "╔"sv, "╗"sv, "╚"sv, "╝"sv, "═"sv, "║"sv },
	{ "╭"sv, "╮"sv, "╰"sv, "╯"sv, "─"sv, "│"sv },
	{ " "sv, " "sv, " "sv, " "sv, " "sv, " "sv },
};


} // NS: termic
