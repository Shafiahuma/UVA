# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


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
CMAKE_COMMAND = /snap/clion/114/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/114/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/huma/spoj_DIVSUM2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/huma/spoj_DIVSUM2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/spoj_DIVSUM2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/spoj_DIVSUM2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/spoj_DIVSUM2.dir/flags.make

CMakeFiles/spoj_DIVSUM2.dir/main.cpp.o: CMakeFiles/spoj_DIVSUM2.dir/flags.make
CMakeFiles/spoj_DIVSUM2.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/huma/spoj_DIVSUM2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/spoj_DIVSUM2.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/spoj_DIVSUM2.dir/main.cpp.o -c /home/huma/spoj_DIVSUM2/main.cpp

CMakeFiles/spoj_DIVSUM2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/spoj_DIVSUM2.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/huma/spoj_DIVSUM2/main.cpp > CMakeFiles/spoj_DIVSUM2.dir/main.cpp.i

CMakeFiles/spoj_DIVSUM2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/spoj_DIVSUM2.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/huma/spoj_DIVSUM2/main.cpp -o CMakeFiles/spoj_DIVSUM2.dir/main.cpp.s

# Object files for target spoj_DIVSUM2
spoj_DIVSUM2_OBJECTS = \
"CMakeFiles/spoj_DIVSUM2.dir/main.cpp.o"

# External object files for target spoj_DIVSUM2
spoj_DIVSUM2_EXTERNAL_OBJECTS =

spoj_DIVSUM2: CMakeFiles/spoj_DIVSUM2.dir/main.cpp.o
spoj_DIVSUM2: CMakeFiles/spoj_DIVSUM2.dir/build.make
spoj_DIVSUM2: CMakeFiles/spoj_DIVSUM2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/huma/spoj_DIVSUM2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable spoj_DIVSUM2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/spoj_DIVSUM2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/spoj_DIVSUM2.dir/build: spoj_DIVSUM2

.PHONY : CMakeFiles/spoj_DIVSUM2.dir/build

CMakeFiles/spoj_DIVSUM2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/spoj_DIVSUM2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/spoj_DIVSUM2.dir/clean

CMakeFiles/spoj_DIVSUM2.dir/depend:
	cd /home/huma/spoj_DIVSUM2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/huma/spoj_DIVSUM2 /home/huma/spoj_DIVSUM2 /home/huma/spoj_DIVSUM2/cmake-build-debug /home/huma/spoj_DIVSUM2/cmake-build-debug /home/huma/spoj_DIVSUM2/cmake-build-debug/CMakeFiles/spoj_DIVSUM2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/spoj_DIVSUM2.dir/depend

