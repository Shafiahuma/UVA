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
CMAKE_COMMAND = /snap/clion/121/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/121/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/huma/sliding window"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/huma/sliding window/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/sliding_window.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/sliding_window.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sliding_window.dir/flags.make

CMakeFiles/sliding_window.dir/main.cpp.o: CMakeFiles/sliding_window.dir/flags.make
CMakeFiles/sliding_window.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/huma/sliding window/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sliding_window.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sliding_window.dir/main.cpp.o -c "/home/huma/sliding window/main.cpp"

CMakeFiles/sliding_window.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sliding_window.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/huma/sliding window/main.cpp" > CMakeFiles/sliding_window.dir/main.cpp.i

CMakeFiles/sliding_window.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sliding_window.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/huma/sliding window/main.cpp" -o CMakeFiles/sliding_window.dir/main.cpp.s

# Object files for target sliding_window
sliding_window_OBJECTS = \
"CMakeFiles/sliding_window.dir/main.cpp.o"

# External object files for target sliding_window
sliding_window_EXTERNAL_OBJECTS =

sliding_window: CMakeFiles/sliding_window.dir/main.cpp.o
sliding_window: CMakeFiles/sliding_window.dir/build.make
sliding_window: CMakeFiles/sliding_window.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/huma/sliding window/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable sliding_window"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sliding_window.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sliding_window.dir/build: sliding_window

.PHONY : CMakeFiles/sliding_window.dir/build

CMakeFiles/sliding_window.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sliding_window.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sliding_window.dir/clean

CMakeFiles/sliding_window.dir/depend:
	cd "/home/huma/sliding window/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/huma/sliding window" "/home/huma/sliding window" "/home/huma/sliding window/cmake-build-debug" "/home/huma/sliding window/cmake-build-debug" "/home/huma/sliding window/cmake-build-debug/CMakeFiles/sliding_window.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/sliding_window.dir/depend

