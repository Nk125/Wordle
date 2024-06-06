cmake_minimum_required(VERSION 3.15)

project(Wordle)

find_package(termcolor REQUIRED)

add_executable(Wordle
	"src/main.cpp"
	"src/dict.cpp"
	"src/file.cpp"
	"src/filter.cpp"
	"src/game.cpp"
	"src/normalizer.cpp"
	"src/parser.cpp"
)

target_compile_features(Wordle PRIVATE cxx_std_17)

target_include_directories(Wordle PRIVATE "include")

target_link_libraries(Wordle PRIVATE termcolor::termcolor)