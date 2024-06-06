#pragma once
#include <string>
#include <vector>

namespace self {
	/*
	 * @brief The dict_primitive type is an array of strings, each one being a word to guess inside game
	 * @note Another primitive type is a raw string, containing words separated by a comma, those raw strings are upgraded to this type when parsed, see parser.hpp
	 */
	using dict_primitive = std::vector<std::string>;
}