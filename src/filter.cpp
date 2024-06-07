#include <filter.hpp>
#include <algorithm>

std::string self::filter::clean_word(std::string_view word) {
	std::string clean;

	std::for_each(word.begin(), word.end(), 
	[&clean](char c) {
		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
			clean += c;
		}
	});

	return clean;
}