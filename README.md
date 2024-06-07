## Wordle

> [!IMPORTANT]
> This is still WIP, when goes out of WIP, this notice will be removed

A simple console-based wordle, inspired by [La palabra del día](https://lapalabradeldia.com)

Game rules and instructions are inside the game

## How to build

1. Download dependencies

	The build tools required are [CMake](https://cmake.org) and a generator (like [ninja](https://ninja-build.org/) or make), to facilitate the dependency download process, you can install [conan](https://conan.io).

	For now, the only one dependency is termcolor, to install it you can run conan and let it configure your environment:

	```bash
	# If you don't have a conan profile, you can make it with this command:
	conan profile detect --force

	# The game use C++17 features, in order to succesfully compile, use a profile that use C++17 as c++ version
	conan install . --build=missing

	# Or if you want to do it in the command:
	conan install . --build=missing -s:a compiler.cppstd=17
	```

	* Other ways to download

		Termcolor it's also included in some other packaging methods or vcpkg, see [termcolor installation methods](https://github.com/ikalnytskyi/termcolor#installation)

2. Build with CMake

	Now, after downloading dependencies, you should configure the cmake project

	```bash
	# If you're using conan and cmake >= 3.23, you can do the following:
	# Assuming your conan preset is conan-release, you can try with conan-default or conan-debug
	# Also assuming you're using ninja, to use make change the flag to -G "Unix Makefiles"
	cmake --preset conan-release -G "Ninja"
	```

	Then, build using cmake:

	```bash
	cmake --build --preset conan-release
	```

	If you aren't using conan, there'll be a few more keyboard-crunch in the commands

	* Configure

		```bash
		cmake -B build_dir -S . -G "Ninja"
		```

	* Build

		```bash
		# The -j4 flag means that 4 threads/jobs 	will be run to compile the project
		# To remove the concurrency, remove -j4, 	to add more jobs, change the number 	after -j, like -j8
		cmake --build build_dir -j4 
		```

3. Enjoy!

	The project will be built and ready to use!, in order to run, search for the executable file located inside the build folder, a few common examples are:

	* `./build/Release/Wordle`

	* `./build/Debug/Wordle`

## Credits

Me, and all people that believe on me, thx!
