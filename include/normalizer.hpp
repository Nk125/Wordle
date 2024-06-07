#pragma once
#include <string>
#include <string_view>

namespace self::normalizer {
	/*
	 * @brief Normalize all chars in string
	 * @note Normalizing refers to capitalize the char
	 * @param string The string to be normalized
	 * @return The normalized string
	 */
	std::string normalize(std::string_view);
}