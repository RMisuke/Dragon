# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/Snow/CLionProjects/Dragon

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/Snow/CLionProjects/Dragon/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/register.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/register.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/register.dir/flags.make

CMakeFiles/register.dir/library/register.cpp.o: CMakeFiles/register.dir/flags.make
CMakeFiles/register.dir/library/register.cpp.o: ../library/register.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Snow/CLionProjects/Dragon/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/register.dir/library/register.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/register.dir/library/register.cpp.o -c /Users/Snow/CLionProjects/Dragon/library/register.cpp

CMakeFiles/register.dir/library/register.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/register.dir/library/register.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Snow/CLionProjects/Dragon/library/register.cpp > CMakeFiles/register.dir/library/register.cpp.i

CMakeFiles/register.dir/library/register.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/register.dir/library/register.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Snow/CLionProjects/Dragon/library/register.cpp -o CMakeFiles/register.dir/library/register.cpp.s

# Object files for target register
register_OBJECTS = \
"CMakeFiles/register.dir/library/register.cpp.o"

# External object files for target register
register_EXTERNAL_OBJECTS =

libregister.a: CMakeFiles/register.dir/library/register.cpp.o
libregister.a: CMakeFiles/register.dir/build.make
libregister.a: CMakeFiles/register.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/Snow/CLionProjects/Dragon/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libregister.a"
	$(CMAKE_COMMAND) -P CMakeFiles/register.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/register.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/register.dir/build: libregister.a

.PHONY : CMakeFiles/register.dir/build

CMakeFiles/register.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/register.dir/cmake_clean.cmake
.PHONY : CMakeFiles/register.dir/clean

CMakeFiles/register.dir/depend:
	cd /Users/Snow/CLionProjects/Dragon/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/Snow/CLionProjects/Dragon /Users/Snow/CLionProjects/Dragon /Users/Snow/CLionProjects/Dragon/cmake-build-debug /Users/Snow/CLionProjects/Dragon/cmake-build-debug /Users/Snow/CLionProjects/Dragon/cmake-build-debug/CMakeFiles/register.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/register.dir/depend
