#pragma once
#include <string_view>

namespace self::filter {
	/*
	 * @brief Check if the word is valid
	 */
	bool is_valid_word(std::string_view);
}