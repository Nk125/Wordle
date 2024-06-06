#pragma once
#include <string_view>

namespace self::normalizer {
	/*
	 * @brief Normalize all chars in string
	 * @note Normalizing refers to capitalize the char
	 */
	std::string_view normalize(std::string_view);
}