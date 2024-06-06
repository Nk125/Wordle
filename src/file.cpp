#include <file.hpp>
#include <fstream>

std::optional<std::string> self::file::read_file(std::string_view filepath) {
	std::ifstream file(std::string(filepath), std::ios::binary | std::ios::end);

	// Return if file doesn't exist or currently busy
	if (!file.is_open()) {
		return std::nullopt;
	}

	size_t fileSize = file.tellg();

	file.seekg(0, std::ios::beg);

	std::string outBuf;

	file.read(&outBuf[0], fileSize);

	file.close();

	// Return if there were an error while reading file occurred
	if (file.bad()) {
		return std::nullopt;
	}

	return outBuf;
}