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
CMAKE_COMMAND = /snap/clion/145/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/145/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/huma/uva/572

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/huma/uva/572/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/572.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/572.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/572.dir/flags.make

CMakeFiles/572.dir/main.cpp.o: CMakeFiles/572.dir/flags.make
CMakeFiles/572.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/huma/uva/572/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/572.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/572.dir/main.cpp.o -c /home/huma/uva/572/main.cpp

CMakeFiles/572.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/572.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/huma/uva/572/main.cpp > CMakeFiles/572.dir/main.cpp.i

CMakeFiles/572.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/572.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/huma/uva/572/main.cpp -o CMakeFiles/572.dir/main.cpp.s

# Object files for target 572
572_OBJECTS = \
"CMakeFiles/572.dir/main.cpp.o"

# External object files for target 572
572_EXTERNAL_OBJECTS =

572: CMakeFiles/572.dir/main.cpp.o
572: CMakeFiles/572.dir/build.make
572: CMakeFiles/572.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/huma/uva/572/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 572"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/572.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/572.dir/build: 572

.PHONY : CMakeFiles/572.dir/build

CMakeFiles/572.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/572.dir/cmake_clean.cmake
.PHONY : CMakeFiles/572.dir/clean

CMakeFiles/572.dir/depend:
	cd /home/huma/uva/572/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/huma/uva/572 /home/huma/uva/572 /home/huma/uva/572/cmake-build-debug /home/huma/uva/572/cmake-build-debug /home/huma/uva/572/cmake-build-debug/CMakeFiles/572.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/572.dir/depend

