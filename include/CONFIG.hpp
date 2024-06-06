#pragma once

namespace self::config {
	/*
	 * @brief File path to the dictionary file
	 * @note This must be a file that each word is delimited by commas (,)
	 */
	const char dict_file[] = "dict.txt";

	/*
	 * @brief The delimiter declaration, by default it's a comma (,), but it can be changed
	 */
	const char delimiter = ',';

	/*
	 * @brief Total attempts allowed to guess the word
	 */
	const size_t word_guess_attempts = 6;
}