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
include Leetcode/CMakeFiles/designParking.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Leetcode/CMakeFiles/designParking.dir/compiler_depend.make

# Include the progress variables for this target.
include Leetcode/CMakeFiles/designParking.dir/progress.make

# Include the compile flags for this target's objects.
include Leetcode/CMakeFiles/designParking.dir/flags.make

Leetcode/CMakeFiles/designParking.dir/designParking.cpp.o: Leetcode/CMakeFiles/designParking.dir/flags.make
Leetcode/CMakeFiles/designParking.dir/designParking.cpp.o: /home/jonatan/GitIvan/Leetcode/designParking.cpp
Leetcode/CMakeFiles/designParking.dir/designParking.cpp.o: Leetcode/CMakeFiles/designParking.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jonatan/GitIvan/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Leetcode/CMakeFiles/designParking.dir/designParking.cpp.o"
	cd /home/jonatan/GitIvan/build/Leetcode && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Leetcode/CMakeFiles/designParking.dir/designParking.cpp.o -MF CMakeFiles/designParking.dir/designParking.cpp.o.d -o CMakeFiles/designParking.dir/designParking.cpp.o -c /home/jonatan/GitIvan/Leetcode/designParking.cpp

Leetcode/CMakeFiles/designParking.dir/designParking.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/designParking.dir/designParking.cpp.i"
	cd /home/jonatan/GitIvan/build/Leetcode && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jonatan/GitIvan/Leetcode/designParking.cpp > CMakeFiles/designParking.dir/designParking.cpp.i

Leetcode/CMakeFiles/designParking.dir/designParking.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/designParking.dir/designParking.cpp.s"
	cd /home/jonatan/GitIvan/build/Leetcode && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jonatan/GitIvan/Leetcode/designParking.cpp -o CMakeFiles/designParking.dir/designParking.cpp.s

# Object files for target designParking
designParking_OBJECTS = \
"CMakeFiles/designParking.dir/designParking.cpp.o"

# External object files for target designParking
designParking_EXTERNAL_OBJECTS =

Leetcode/designParking: Leetcode/CMakeFiles/designParking.dir/designParking.cpp.o
Leetcode/designParking: Leetcode/CMakeFiles/designParking.dir/build.make
Leetcode/designParking: Leetcode/CMakeFiles/designParking.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/jonatan/GitIvan/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable designParking"
	cd /home/jonatan/GitIvan/build/Leetcode && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/designParking.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Leetcode/CMakeFiles/designParking.dir/build: Leetcode/designParking
.PHONY : Leetcode/CMakeFiles/designParking.dir/build

Leetcode/CMakeFiles/designParking.dir/clean:
	cd /home/jonatan/GitIvan/build/Leetcode && $(CMAKE_COMMAND) -P CMakeFiles/designParking.dir/cmake_clean.cmake
.PHONY : Leetcode/CMakeFiles/designParking.dir/clean

Leetcode/CMakeFiles/designParking.dir/depend:
	cd /home/jonatan/GitIvan/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jonatan/GitIvan /home/jonatan/GitIvan/Leetcode /home/jonatan/GitIvan/build /home/jonatan/GitIvan/build/Leetcode /home/jonatan/GitIvan/build/Leetcode/CMakeFiles/designParking.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : Leetcode/CMakeFiles/designParking.dir/depend

