# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.2

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/margar/OAD/graficadorafun

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/margar/OAD/graficadorafun/build

# Utility rule file for SimpleView_automoc.

# Include the progress variables for this target.
include CMakeFiles/SimpleView_automoc.dir/progress.make

CMakeFiles/SimpleView_automoc:
	$(CMAKE_COMMAND) -E cmake_progress_report /home/margar/OAD/graficadorafun/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Automatic moc for target SimpleView"
	/usr/bin/cmake -E cmake_autogen /home/margar/OAD/graficadorafun/build/CMakeFiles/SimpleView_automoc.dir/ ""

SimpleView_automoc: CMakeFiles/SimpleView_automoc
SimpleView_automoc: CMakeFiles/SimpleView_automoc.dir/build.make
.PHONY : SimpleView_automoc

# Rule to build all files generated by this target.
CMakeFiles/SimpleView_automoc.dir/build: SimpleView_automoc
.PHONY : CMakeFiles/SimpleView_automoc.dir/build

CMakeFiles/SimpleView_automoc.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SimpleView_automoc.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SimpleView_automoc.dir/clean

CMakeFiles/SimpleView_automoc.dir/depend:
	cd /home/margar/OAD/graficadorafun/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/margar/OAD/graficadorafun /home/margar/OAD/graficadorafun /home/margar/OAD/graficadorafun/build /home/margar/OAD/graficadorafun/build /home/margar/OAD/graficadorafun/build/CMakeFiles/SimpleView_automoc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SimpleView_automoc.dir/depend

