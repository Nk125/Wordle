#include <CONFIG.hpp>
#include <dict.hpp>
#include <file.hpp>
#include <game.hpp>
#include <iostream>
#include <parser.hpp>
#include <string>

int main() {
	self::dict dictionary;

	std::optional<std::string> file_content = self::file::read_file(self::config::dict_file);
	
	if (!file_content.has_value()) {
		std::cerr << "Failed to load content of file\n";
		return 1;
	}

	if (!dictionary.load(
		self::parser::parse_dict(
			file_content.value()
		)
	)) {
		std::cerr << "Failed to load dict from the parsed dict";
		return 1;
	}

	bool restart = false;

	self::game::print_welcome_msg();

	self::game::print_rules();

	do {
		restart = false;

		switch (self::game::loop(dictionary.select_random_word())) {
			case self::game::state::restart:
				self::game::print_welcome_msg();
				restart = true;
				break;
			case self::game::state::close:
				return 0;
				break;
			default:
				break;
		}
	} while (restart);
}