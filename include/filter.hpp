#pragma once
#include <string>
#include <string_view>

namespace self::filter {
	/*
	 * @brief Cleans the word of unwanted chars
	 * @param word The word to be cleaned
	 * @return The cleaned word
	 */
	std::string clean_word(std::string_view);
}