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
CMAKE_SOURCE_DIR = /home/huma/CLionProject/uva12527

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/huma/CLionProject/uva12527/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/uva12527.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/uva12527.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/uva12527.dir/flags.make

CMakeFiles/uva12527.dir/main.cpp.o: CMakeFiles/uva12527.dir/flags.make
CMakeFiles/uva12527.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/huma/CLionProject/uva12527/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/uva12527.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/uva12527.dir/main.cpp.o -c /home/huma/CLionProject/uva12527/main.cpp

CMakeFiles/uva12527.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/uva12527.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/huma/CLionProject/uva12527/main.cpp > CMakeFiles/uva12527.dir/main.cpp.i

CMakeFiles/uva12527.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/uva12527.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/huma/CLionProject/uva12527/main.cpp -o CMakeFiles/uva12527.dir/main.cpp.s

# Object files for target uva12527
uva12527_OBJECTS = \
"CMakeFiles/uva12527.dir/main.cpp.o"

# External object files for target uva12527
uva12527_EXTERNAL_OBJECTS =

uva12527: CMakeFiles/uva12527.dir/main.cpp.o
uva12527: CMakeFiles/uva12527.dir/build.make
uva12527: CMakeFiles/uva12527.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/huma/CLionProject/uva12527/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable uva12527"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/uva12527.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/uva12527.dir/build: uva12527

.PHONY : CMakeFiles/uva12527.dir/build

CMakeFiles/uva12527.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/uva12527.dir/cmake_clean.cmake
.PHONY : CMakeFiles/uva12527.dir/clean

CMakeFiles/uva12527.dir/depend:
	cd /home/huma/CLionProject/uva12527/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/huma/CLionProject/uva12527 /home/huma/CLionProject/uva12527 /home/huma/CLionProject/uva12527/cmake-build-debug /home/huma/CLionProject/uva12527/cmake-build-debug /home/huma/CLionProject/uva12527/cmake-build-debug/CMakeFiles/uva12527.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/uva12527.dir/depend

