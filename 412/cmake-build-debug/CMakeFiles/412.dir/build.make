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
CMAKE_SOURCE_DIR = /home/huma/uva/412

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/huma/uva/412/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/412.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/412.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/412.dir/flags.make

CMakeFiles/412.dir/main.cpp.o: CMakeFiles/412.dir/flags.make
CMakeFiles/412.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/huma/uva/412/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/412.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/412.dir/main.cpp.o -c /home/huma/uva/412/main.cpp

CMakeFiles/412.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/412.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/huma/uva/412/main.cpp > CMakeFiles/412.dir/main.cpp.i

CMakeFiles/412.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/412.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/huma/uva/412/main.cpp -o CMakeFiles/412.dir/main.cpp.s

# Object files for target 412
412_OBJECTS = \
"CMakeFiles/412.dir/main.cpp.o"

# External object files for target 412
412_EXTERNAL_OBJECTS =

412: CMakeFiles/412.dir/main.cpp.o
412: CMakeFiles/412.dir/build.make
412: CMakeFiles/412.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/huma/uva/412/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 412"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/412.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/412.dir/build: 412

.PHONY : CMakeFiles/412.dir/build

CMakeFiles/412.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/412.dir/cmake_clean.cmake
.PHONY : CMakeFiles/412.dir/clean

CMakeFiles/412.dir/depend:
	cd /home/huma/uva/412/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/huma/uva/412 /home/huma/uva/412 /home/huma/uva/412/cmake-build-debug /home/huma/uva/412/cmake-build-debug /home/huma/uva/412/cmake-build-debug/CMakeFiles/412.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/412.dir/depend
