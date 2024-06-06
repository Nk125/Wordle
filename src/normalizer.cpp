#include <normalizer.hpp>
#include <algorithm>
#include <cctype>
#include <iterator>
#include <string>

std::string_view self::normalizer::normalize(std::string_view word) {
	std::string norm_word;

	std::transform(word.begin(), word.end(), std::back_inserter(norm_word.begin()), 
	[](unsigned char ch) {
		return static_cast<char>(toupper(ch));
	});

	return norm_word;
}