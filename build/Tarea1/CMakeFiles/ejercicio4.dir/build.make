# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /home/ivan/ALSEivan

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ivan/ALSEivan/build

# Include any dependencies generated for this target.
include Tarea1/CMakeFiles/ejercicio4.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Tarea1/CMakeFiles/ejercicio4.dir/compiler_depend.make

# Include the progress variables for this target.
include Tarea1/CMakeFiles/ejercicio4.dir/progress.make

# Include the compile flags for this target's objects.
include Tarea1/CMakeFiles/ejercicio4.dir/flags.make

Tarea1/CMakeFiles/ejercicio4.dir/ejercicio4.1.cpp.o: Tarea1/CMakeFiles/ejercicio4.dir/flags.make
Tarea1/CMakeFiles/ejercicio4.dir/ejercicio4.1.cpp.o: ../Tarea1/ejercicio4.1.cpp
Tarea1/CMakeFiles/ejercicio4.dir/ejercicio4.1.cpp.o: Tarea1/CMakeFiles/ejercicio4.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ivan/ALSEivan/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Tarea1/CMakeFiles/ejercicio4.dir/ejercicio4.1.cpp.o"
	cd /home/ivan/ALSEivan/build/Tarea1 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Tarea1/CMakeFiles/ejercicio4.dir/ejercicio4.1.cpp.o -MF CMakeFiles/ejercicio4.dir/ejercicio4.1.cpp.o.d -o CMakeFiles/ejercicio4.dir/ejercicio4.1.cpp.o -c /home/ivan/ALSEivan/Tarea1/ejercicio4.1.cpp

Tarea1/CMakeFiles/ejercicio4.dir/ejercicio4.1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ejercicio4.dir/ejercicio4.1.cpp.i"
	cd /home/ivan/ALSEivan/build/Tarea1 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ivan/ALSEivan/Tarea1/ejercicio4.1.cpp > CMakeFiles/ejercicio4.dir/ejercicio4.1.cpp.i

Tarea1/CMakeFiles/ejercicio4.dir/ejercicio4.1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ejercicio4.dir/ejercicio4.1.cpp.s"
	cd /home/ivan/ALSEivan/build/Tarea1 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ivan/ALSEivan/Tarea1/ejercicio4.1.cpp -o CMakeFiles/ejercicio4.dir/ejercicio4.1.cpp.s

# Object files for target ejercicio4
ejercicio4_OBJECTS = \
"CMakeFiles/ejercicio4.dir/ejercicio4.1.cpp.o"

# External object files for target ejercicio4
ejercicio4_EXTERNAL_OBJECTS =

Tarea1/ejercicio4: Tarea1/CMakeFiles/ejercicio4.dir/ejercicio4.1.cpp.o
Tarea1/ejercicio4: Tarea1/CMakeFiles/ejercicio4.dir/build.make
Tarea1/ejercicio4: Tarea1/CMakeFiles/ejercicio4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ivan/ALSEivan/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ejercicio4"
	cd /home/ivan/ALSEivan/build/Tarea1 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ejercicio4.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Tarea1/CMakeFiles/ejercicio4.dir/build: Tarea1/ejercicio4
.PHONY : Tarea1/CMakeFiles/ejercicio4.dir/build

Tarea1/CMakeFiles/ejercicio4.dir/clean:
	cd /home/ivan/ALSEivan/build/Tarea1 && $(CMAKE_COMMAND) -P CMakeFiles/ejercicio4.dir/cmake_clean.cmake
.PHONY : Tarea1/CMakeFiles/ejercicio4.dir/clean

Tarea1/CMakeFiles/ejercicio4.dir/depend:
	cd /home/ivan/ALSEivan/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ivan/ALSEivan /home/ivan/ALSEivan/Tarea1 /home/ivan/ALSEivan/build /home/ivan/ALSEivan/build/Tarea1 /home/ivan/ALSEivan/build/Tarea1/CMakeFiles/ejercicio4.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Tarea1/CMakeFiles/ejercicio4.dir/depend

