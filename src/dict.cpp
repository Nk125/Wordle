#include <dict.hpp>
#include <algorithm>
#include <random>

bool self::dict::load(const self::dict_primitive& dict_prim) {
	if (dict_prim.empty()) return false;

	m_dict = dict_prim;

	return true;
}

std::string self::dict::select_random_word() {
	std::random_device rd;
	std::mt19937_64 mt(rd());
	std::uniform_int_distribution<size_t> uid(0, m_dict.size() - 1);

	return m_dict.at(uid(mt));
}

bool self::dict::is_in_the_list(std::string_view word) {
	return std::find(m_dict.begin(), m_dict.end(), word) != m_dict.end();
}