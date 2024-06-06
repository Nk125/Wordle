#include <filter.hpp>

bool self::filter::is_valid_word(std::string_view word) {
	if (word.empty()) return false;

	bool charsValid = true;

	for (char c : word) {
		charsValid = (c >= 'A' && c <= 'Z') && charsValid;
	}

	return charsValid;
}