#include <normalizer.hpp>
#include <algorithm>
#include <cctype>
#include <iterator>
#include <string>

std::string_view self::normalizer::normalize(std::string_view word) {
	std::string norm_word;

	std::transform(word.begin(), word.end(), std::inserter(norm_word, norm_word.end()), 
	[](unsigned char ch) {
		return static_cast<char>(toupper(ch));
	});

	return norm_word;
}