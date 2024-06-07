#include <parser.hpp>
#include <CONFIG.hpp>
#include <filter.hpp>
#include <normalizer.hpp>

self::dict_primitive self::parser::parse_dict(std::string_view rawdict) {
	self::dict_primitive dict_prim;

	size_t tokenOffset = 0, sepOff = 0;
	const size_t strfinish = std::string::npos;

	while (sepOff != strfinish) {
		// Tokenizing process

	    sepOff = rawdict.find(config::delimiter, sepOff);

	    size_t tokenLen = (sepOff == strfinish) ? sepOff : sepOff++ - tokenOffset;

	    std::string_view token = rawdict.substr(tokenOffset, tokenLen);

		tokenOffset = sepOff;

		// Filter process

	    if (token.empty()) continue;

		std::string norm_token = normalizer::normalize(
			filter::clean_word(token)
		);

		dict_prim.push_back(norm_token);
	}

	return dict_prim;
}