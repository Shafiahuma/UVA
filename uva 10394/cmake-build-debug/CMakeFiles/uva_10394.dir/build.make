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
CMAKE_SOURCE_DIR = "/home/huma/uva 10394"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/huma/uva 10394/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/uva_10394.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/uva_10394.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/uva_10394.dir/flags.make

CMakeFiles/uva_10394.dir/main.cpp.o: CMakeFiles/uva_10394.dir/flags.make
CMakeFiles/uva_10394.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/huma/uva 10394/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/uva_10394.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/uva_10394.dir/main.cpp.o -c "/home/huma/uva 10394/main.cpp"

CMakeFiles/uva_10394.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/uva_10394.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/huma/uva 10394/main.cpp" > CMakeFiles/uva_10394.dir/main.cpp.i

CMakeFiles/uva_10394.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/uva_10394.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/huma/uva 10394/main.cpp" -o CMakeFiles/uva_10394.dir/main.cpp.s

# Object files for target uva_10394
uva_10394_OBJECTS = \
"CMakeFiles/uva_10394.dir/main.cpp.o"

# External object files for target uva_10394
uva_10394_EXTERNAL_OBJECTS =

uva_10394: CMakeFiles/uva_10394.dir/main.cpp.o
uva_10394: CMakeFiles/uva_10394.dir/build.make
uva_10394: CMakeFiles/uva_10394.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/huma/uva 10394/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable uva_10394"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/uva_10394.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/uva_10394.dir/build: uva_10394

.PHONY : CMakeFiles/uva_10394.dir/build

CMakeFiles/uva_10394.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/uva_10394.dir/cmake_clean.cmake
.PHONY : CMakeFiles/uva_10394.dir/clean

CMakeFiles/uva_10394.dir/depend:
	cd "/home/huma/uva 10394/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/huma/uva 10394" "/home/huma/uva 10394" "/home/huma/uva 10394/cmake-build-debug" "/home/huma/uva 10394/cmake-build-debug" "/home/huma/uva 10394/cmake-build-debug/CMakeFiles/uva_10394.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/uva_10394.dir/depend

