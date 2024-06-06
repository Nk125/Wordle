#pragma once
#include <dict_primitive.hpp>
#include <string_view>

namespace self::parser {
	/*
	 * @brief Parse a dictionary from a string
	 * @param dict_string The dictionary, in a raw string form
	 * @return The dict_primitive from the raw string
	 * @note The dict raw string must contain the words, each one separated by a comma (,)
	 */
	dict_primitive parse_dict(std::string_view); 
}