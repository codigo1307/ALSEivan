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
include Leetcode/CMakeFiles/validSudoku.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Leetcode/CMakeFiles/validSudoku.dir/compiler_depend.make

# Include the progress variables for this target.
include Leetcode/CMakeFiles/validSudoku.dir/progress.make

# Include the compile flags for this target's objects.
include Leetcode/CMakeFiles/validSudoku.dir/flags.make

Leetcode/CMakeFiles/validSudoku.dir/validSudoku.cpp.o: Leetcode/CMakeFiles/validSudoku.dir/flags.make
Leetcode/CMakeFiles/validSudoku.dir/validSudoku.cpp.o: /home/jonatan/GitIvan/Leetcode/validSudoku.cpp
Leetcode/CMakeFiles/validSudoku.dir/validSudoku.cpp.o: Leetcode/CMakeFiles/validSudoku.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jonatan/GitIvan/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Leetcode/CMakeFiles/validSudoku.dir/validSudoku.cpp.o"
	cd /home/jonatan/GitIvan/build/Leetcode && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Leetcode/CMakeFiles/validSudoku.dir/validSudoku.cpp.o -MF CMakeFiles/validSudoku.dir/validSudoku.cpp.o.d -o CMakeFiles/validSudoku.dir/validSudoku.cpp.o -c /home/jonatan/GitIvan/Leetcode/validSudoku.cpp

Leetcode/CMakeFiles/validSudoku.dir/validSudoku.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/validSudoku.dir/validSudoku.cpp.i"
	cd /home/jonatan/GitIvan/build/Leetcode && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jonatan/GitIvan/Leetcode/validSudoku.cpp > CMakeFiles/validSudoku.dir/validSudoku.cpp.i

Leetcode/CMakeFiles/validSudoku.dir/validSudoku.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/validSudoku.dir/validSudoku.cpp.s"
	cd /home/jonatan/GitIvan/build/Leetcode && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jonatan/GitIvan/Leetcode/validSudoku.cpp -o CMakeFiles/validSudoku.dir/validSudoku.cpp.s

# Object files for target validSudoku
validSudoku_OBJECTS = \
"CMakeFiles/validSudoku.dir/validSudoku.cpp.o"

# External object files for target validSudoku
validSudoku_EXTERNAL_OBJECTS =

Leetcode/validSudoku: Leetcode/CMakeFiles/validSudoku.dir/validSudoku.cpp.o
Leetcode/validSudoku: Leetcode/CMakeFiles/validSudoku.dir/build.make
Leetcode/validSudoku: Leetcode/CMakeFiles/validSudoku.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/jonatan/GitIvan/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable validSudoku"
	cd /home/jonatan/GitIvan/build/Leetcode && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/validSudoku.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Leetcode/CMakeFiles/validSudoku.dir/build: Leetcode/validSudoku
.PHONY : Leetcode/CMakeFiles/validSudoku.dir/build

Leetcode/CMakeFiles/validSudoku.dir/clean:
	cd /home/jonatan/GitIvan/build/Leetcode && $(CMAKE_COMMAND) -P CMakeFiles/validSudoku.dir/cmake_clean.cmake
.PHONY : Leetcode/CMakeFiles/validSudoku.dir/clean

Leetcode/CMakeFiles/validSudoku.dir/depend:
	cd /home/jonatan/GitIvan/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jonatan/GitIvan /home/jonatan/GitIvan/Leetcode /home/jonatan/GitIvan/build /home/jonatan/GitIvan/build/Leetcode /home/jonatan/GitIvan/build/Leetcode/CMakeFiles/validSudoku.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : Leetcode/CMakeFiles/validSudoku.dir/depend

