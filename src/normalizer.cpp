#include <normalizer.hpp>
#include <algorithm>
#include <cctype>
#include <iterator>

std::string self::normalizer::normalize(std::string_view word) {
	std::string norm_word;

	std::transform(word.begin(), word.end(), std::inserter(norm_word, norm_word.end()), 
	[](unsigned char ch) {
		// See why unsigned char is used and not char
		// https://en.cppreference.com/w/cpp/string/byte/toupper
		return toupper(ch);
	});

	return norm_word;
}