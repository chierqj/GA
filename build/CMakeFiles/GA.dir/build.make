# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.14.4/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.14.4/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/chier/Desktop/GA

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/chier/Desktop/GA/build

# Include any dependencies generated for this target.
include CMakeFiles/GA.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/GA.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/GA.dir/flags.make

CMakeFiles/GA.dir/main.cc.o: CMakeFiles/GA.dir/flags.make
CMakeFiles/GA.dir/main.cc.o: ../main.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/chier/Desktop/GA/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/GA.dir/main.cc.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GA.dir/main.cc.o -c /Users/chier/Desktop/GA/main.cc

CMakeFiles/GA.dir/main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GA.dir/main.cc.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/chier/Desktop/GA/main.cc > CMakeFiles/GA.dir/main.cc.i

CMakeFiles/GA.dir/main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GA.dir/main.cc.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/chier/Desktop/GA/main.cc -o CMakeFiles/GA.dir/main.cc.s

CMakeFiles/GA.dir/src/simulation.cc.o: CMakeFiles/GA.dir/flags.make
CMakeFiles/GA.dir/src/simulation.cc.o: ../src/simulation.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/chier/Desktop/GA/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/GA.dir/src/simulation.cc.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GA.dir/src/simulation.cc.o -c /Users/chier/Desktop/GA/src/simulation.cc

CMakeFiles/GA.dir/src/simulation.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GA.dir/src/simulation.cc.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/chier/Desktop/GA/src/simulation.cc > CMakeFiles/GA.dir/src/simulation.cc.i

CMakeFiles/GA.dir/src/simulation.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GA.dir/src/simulation.cc.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/chier/Desktop/GA/src/simulation.cc -o CMakeFiles/GA.dir/src/simulation.cc.s

CMakeFiles/GA.dir/src/tools.cc.o: CMakeFiles/GA.dir/flags.make
CMakeFiles/GA.dir/src/tools.cc.o: ../src/tools.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/chier/Desktop/GA/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/GA.dir/src/tools.cc.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GA.dir/src/tools.cc.o -c /Users/chier/Desktop/GA/src/tools.cc

CMakeFiles/GA.dir/src/tools.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GA.dir/src/tools.cc.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/chier/Desktop/GA/src/tools.cc > CMakeFiles/GA.dir/src/tools.cc.i

CMakeFiles/GA.dir/src/tools.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GA.dir/src/tools.cc.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/chier/Desktop/GA/src/tools.cc -o CMakeFiles/GA.dir/src/tools.cc.s

CMakeFiles/GA.dir/src/unit.cc.o: CMakeFiles/GA.dir/flags.make
CMakeFiles/GA.dir/src/unit.cc.o: ../src/unit.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/chier/Desktop/GA/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/GA.dir/src/unit.cc.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GA.dir/src/unit.cc.o -c /Users/chier/Desktop/GA/src/unit.cc

CMakeFiles/GA.dir/src/unit.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GA.dir/src/unit.cc.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/chier/Desktop/GA/src/unit.cc > CMakeFiles/GA.dir/src/unit.cc.i

CMakeFiles/GA.dir/src/unit.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GA.dir/src/unit.cc.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/chier/Desktop/GA/src/unit.cc -o CMakeFiles/GA.dir/src/unit.cc.s

# Object files for target GA
GA_OBJECTS = \
"CMakeFiles/GA.dir/main.cc.o" \
"CMakeFiles/GA.dir/src/simulation.cc.o" \
"CMakeFiles/GA.dir/src/tools.cc.o" \
"CMakeFiles/GA.dir/src/unit.cc.o"

# External object files for target GA
GA_EXTERNAL_OBJECTS =

../bin/GA: CMakeFiles/GA.dir/main.cc.o
../bin/GA: CMakeFiles/GA.dir/src/simulation.cc.o
../bin/GA: CMakeFiles/GA.dir/src/tools.cc.o
../bin/GA: CMakeFiles/GA.dir/src/unit.cc.o
../bin/GA: CMakeFiles/GA.dir/build.make
../bin/GA: CMakeFiles/GA.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/chier/Desktop/GA/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable ../bin/GA"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/GA.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/GA.dir/build: ../bin/GA

.PHONY : CMakeFiles/GA.dir/build

CMakeFiles/GA.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/GA.dir/cmake_clean.cmake
.PHONY : CMakeFiles/GA.dir/clean

CMakeFiles/GA.dir/depend:
	cd /Users/chier/Desktop/GA/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/chier/Desktop/GA /Users/chier/Desktop/GA /Users/chier/Desktop/GA/build /Users/chier/Desktop/GA/build /Users/chier/Desktop/GA/build/CMakeFiles/GA.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/GA.dir/depend

