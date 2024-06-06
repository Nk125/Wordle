#pragma once
#include <dict_primitive.hpp>
#include <string>

namespace self {
	class dict {
	private:
		dict_primitive m_dict;

	public:
		/*
		 * @brief Load dict from the dict primitive type
		 * @param dict_primitive The primitive type to load to the dict
		 * @return True if succesfully loaded and dict_primitive isn't empty, false otherwise
		 * @note The dict primitive type is explained in dict_primitive.hpp
		 */
		bool load(const dict_primitive&);

		/*
		 * @brief Select a word from the dict
		 * @return The randomly selected word
		 */
		std::string select_random_word();

		/*
		 * @brief Check if the word is in the list
		 * @param word The word to check
		 * @return True if it's found in the list, false otherwise
		 */
		bool is_in_the_list(std::string_view);
	};
}