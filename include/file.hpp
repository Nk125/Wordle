#pragma once
#include <optional>
#include <string_view>
#include <string>

namespace self::file {
	/*
	 * @brief Read a file and returns its contents
	 * @param filepath The string path to the file to be read 
	 * @return Its contents, or nullopt in failure
	 */
	std::optional<std::string> read_file(std::string_view);
}