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
CMAKE_COMMAND = /snap/clion/139/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/139/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/huma/uva/10327

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/huma/uva/10327/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/10327.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/10327.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/10327.dir/flags.make

CMakeFiles/10327.dir/main.cpp.o: CMakeFiles/10327.dir/flags.make
CMakeFiles/10327.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/huma/uva/10327/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/10327.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/10327.dir/main.cpp.o -c /home/huma/uva/10327/main.cpp

CMakeFiles/10327.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/10327.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/huma/uva/10327/main.cpp > CMakeFiles/10327.dir/main.cpp.i

CMakeFiles/10327.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/10327.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/huma/uva/10327/main.cpp -o CMakeFiles/10327.dir/main.cpp.s

# Object files for target 10327
10327_OBJECTS = \
"CMakeFiles/10327.dir/main.cpp.o"

# External object files for target 10327
10327_EXTERNAL_OBJECTS =

10327: CMakeFiles/10327.dir/main.cpp.o
10327: CMakeFiles/10327.dir/build.make
10327: CMakeFiles/10327.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/huma/uva/10327/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 10327"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/10327.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/10327.dir/build: 10327

.PHONY : CMakeFiles/10327.dir/build

CMakeFiles/10327.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/10327.dir/cmake_clean.cmake
.PHONY : CMakeFiles/10327.dir/clean

CMakeFiles/10327.dir/depend:
	cd /home/huma/uva/10327/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/huma/uva/10327 /home/huma/uva/10327 /home/huma/uva/10327/cmake-build-debug /home/huma/uva/10327/cmake-build-debug /home/huma/uva/10327/cmake-build-debug/CMakeFiles/10327.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/10327.dir/depend
