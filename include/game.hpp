#pragma once
#include <string>

namespace self::game {
	enum state : size_t {
		// Close the game
		close = 0,
		// Restart the game
		restart
	};

	/*
	 * @brief Print the welcome message
	 */
	void print_welcome_msg();

	/*
	 * @brief Ask the user to continue or close the game
	 */
	state user_choice();

	/*
	 * @brief Print the game rules
	 */
	void print_rules();

	/*
	 * @brief Starts the game loop
	 * @param word The word to guess
	 * @return A code to the main function
	 */
	state loop(std::string);
}