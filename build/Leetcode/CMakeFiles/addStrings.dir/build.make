# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jonatan/GitIvan

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jonatan/GitIvan/build

# Include any dependencies generated for this target.
include Leetcode/CMakeFiles/addStrings.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Leetcode/CMakeFiles/addStrings.dir/compiler_depend.make

# Include the progress variables for this target.
include Leetcode/CMakeFiles/addStrings.dir/progress.make

# Include the compile flags for this target's objects.
include Leetcode/CMakeFiles/addStrings.dir/flags.make

Leetcode/CMakeFiles/addStrings.dir/addStrings.cpp.o: Leetcode/CMakeFiles/addStrings.dir/flags.make
Leetcode/CMakeFiles/addStrings.dir/addStrings.cpp.o: /home/jonatan/GitIvan/Leetcode/addStrings.cpp
Leetcode/CMakeFiles/addStrings.dir/addStrings.cpp.o: Leetcode/CMakeFiles/addStrings.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jonatan/GitIvan/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Leetcode/CMakeFiles/addStrings.dir/addStrings.cpp.o"
	cd /home/jonatan/GitIvan/build/Leetcode && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Leetcode/CMakeFiles/addStrings.dir/addStrings.cpp.o -MF CMakeFiles/addStrings.dir/addStrings.cpp.o.d -o CMakeFiles/addStrings.dir/addStrings.cpp.o -c /home/jonatan/GitIvan/Leetcode/addStrings.cpp

Leetcode/CMakeFiles/addStrings.dir/addStrings.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/addStrings.dir/addStrings.cpp.i"
	cd /home/jonatan/GitIvan/build/Leetcode && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jonatan/GitIvan/Leetcode/addStrings.cpp > CMakeFiles/addStrings.dir/addStrings.cpp.i

Leetcode/CMakeFiles/addStrings.dir/addStrings.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/addStrings.dir/addStrings.cpp.s"
	cd /home/jonatan/GitIvan/build/Leetcode && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jonatan/GitIvan/Leetcode/addStrings.cpp -o CMakeFiles/addStrings.dir/addStrings.cpp.s

# Object files for target addStrings
addStrings_OBJECTS = \
"CMakeFiles/addStrings.dir/addStrings.cpp.o"

# External object files for target addStrings
addStrings_EXTERNAL_OBJECTS =

Leetcode/addStrings: Leetcode/CMakeFiles/addStrings.dir/addStrings.cpp.o
Leetcode/addStrings: Leetcode/CMakeFiles/addStrings.dir/build.make
Leetcode/addStrings: Leetcode/CMakeFiles/addStrings.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/jonatan/GitIvan/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable addStrings"
	cd /home/jonatan/GitIvan/build/Leetcode && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/addStrings.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Leetcode/CMakeFiles/addStrings.dir/build: Leetcode/addStrings
.PHONY : Leetcode/CMakeFiles/addStrings.dir/build

Leetcode/CMakeFiles/addStrings.dir/clean:
	cd /home/jonatan/GitIvan/build/Leetcode && $(CMAKE_COMMAND) -P CMakeFiles/addStrings.dir/cmake_clean.cmake
.PHONY : Leetcode/CMakeFiles/addStrings.dir/clean

Leetcode/CMakeFiles/addStrings.dir/depend:
	cd /home/jonatan/GitIvan/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jonatan/GitIvan /home/jonatan/GitIvan/Leetcode /home/jonatan/GitIvan/build /home/jonatan/GitIvan/build/Leetcode /home/jonatan/GitIvan/build/Leetcode/CMakeFiles/addStrings.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : Leetcode/CMakeFiles/addStrings.dir/depend

