# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/clion/123/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/123/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/huma/Euler phi/main(n)"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/huma/Euler phi/main(n)/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/main_n_.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/main_n_.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/main_n_.dir/flags.make

CMakeFiles/main_n_.dir/main.cpp.o: CMakeFiles/main_n_.dir/flags.make
CMakeFiles/main_n_.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/huma/Euler phi/main(n)/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/main_n_.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main_n_.dir/main.cpp.o -c "/home/huma/Euler phi/main(n)/main.cpp"

CMakeFiles/main_n_.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main_n_.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/huma/Euler phi/main(n)/main.cpp" > CMakeFiles/main_n_.dir/main.cpp.i

CMakeFiles/main_n_.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main_n_.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/huma/Euler phi/main(n)/main.cpp" -o CMakeFiles/main_n_.dir/main.cpp.s

# Object files for target main_n_
main_n__OBJECTS = \
"CMakeFiles/main_n_.dir/main.cpp.o"

# External object files for target main_n_
main_n__EXTERNAL_OBJECTS =

main_n_: CMakeFiles/main_n_.dir/main.cpp.o
main_n_: CMakeFiles/main_n_.dir/build.make
main_n_: CMakeFiles/main_n_.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/huma/Euler phi/main(n)/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable main_n_"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main_n_.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/main_n_.dir/build: main_n_

.PHONY : CMakeFiles/main_n_.dir/build

CMakeFiles/main_n_.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/main_n_.dir/cmake_clean.cmake
.PHONY : CMakeFiles/main_n_.dir/clean

CMakeFiles/main_n_.dir/depend:
	cd "/home/huma/Euler phi/main(n)/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/huma/Euler phi/main(n)" "/home/huma/Euler phi/main(n)" "/home/huma/Euler phi/main(n)/cmake-build-debug" "/home/huma/Euler phi/main(n)/cmake-build-debug" "/home/huma/Euler phi/main(n)/cmake-build-debug/CMakeFiles/main_n_.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/main_n_.dir/depend

