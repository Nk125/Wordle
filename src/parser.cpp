#include <parser.hpp>
#include <CONFIG.hpp>
#include <filter.hpp>
#include <normalizer.hpp>

self::dict_primitive self::parser::parse_dict(std::string_view rawdict) {
	self::dict_primitive dict_prim;

	size_t tokenOffset = 0, sepOff = 0, tokenLen = 0;
	const size_t strfinish = std::string::npos;

	std::string_view token;

	while (sepOff != strfinish) {
		// Tokenizing process

	    sepOff = rawdict.find(config::delimiter, sepOff);

	    tokenLen = (sepOff == strfinish) ? sepOff : sepOff++ - tokenOffset;

	    token = rawdict.substr(tokenOffset, tokenLen);

		tokenOffset = sepOff;

		// Filter process

	    if (token.empty()) continue;

		token = normalizer::normalize(token);

		if (!filter::is_valid_word(token)) continue;

		dict_prim.emplace_back(token);
	}

	return dict_prim;
}