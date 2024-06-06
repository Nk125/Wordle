#include <game.hpp>
#include <CONFIG.hpp>
#include <termcolor/termcolor.hpp>

void self::game::print_welcome_msg() {
	std::cout << "Welcome to " << termcolor::cyan << "Wordle" << termcolor::reset << "!\n";
}

void self::game::print_rules() {
	std::cout << "Rules: " << "\n";

	std::cout << "  You have " << termcolor::cyan << config::word_guess_attempts << termcolor::reset 
		<< " attempts to try to guess the word\n";

	std::cout << "  Letters marked with " << termcolor::green << "green" << termcolor::reset 
		<< " are in the word and in the right position" << "\n";

	std::cout << "  Letters marked with " << termcolor::yellow << "yellow" << termcolor::reset 
		<< " are in the word but in the incorrect position" << "\n";

	std::cout << "  Letters marked with " << termcolor::red << "red" << termcolor::reset 
		<< " aren't in the word" << "\n";
}

self::game::state self::game::user_choice() {
	std::cout << "Do you want another round? (y/n):\n";

	return state::close;
}

self::game::state self::game::loop(std::string word) {
	std::cout << "Game loop To-Do, closing...\n";
	
	return state::close;
}