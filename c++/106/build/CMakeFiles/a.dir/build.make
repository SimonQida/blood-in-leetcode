# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.15.2/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.15.2/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/simonqi/Documents/leetcode/c++/106

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/simonqi/Documents/leetcode/c++/106/build

# Include any dependencies generated for this target.
include CMakeFiles/a.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/a.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/a.dir/flags.make

CMakeFiles/a.dir/gtest_main.cpp.o: CMakeFiles/a.dir/flags.make
CMakeFiles/a.dir/gtest_main.cpp.o: ../gtest_main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/simonqi/Documents/leetcode/c++/106/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/a.dir/gtest_main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/a.dir/gtest_main.cpp.o -c /Users/simonqi/Documents/leetcode/c++/106/gtest_main.cpp

CMakeFiles/a.dir/gtest_main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/a.dir/gtest_main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/simonqi/Documents/leetcode/c++/106/gtest_main.cpp > CMakeFiles/a.dir/gtest_main.cpp.i

CMakeFiles/a.dir/gtest_main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/a.dir/gtest_main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/simonqi/Documents/leetcode/c++/106/gtest_main.cpp -o CMakeFiles/a.dir/gtest_main.cpp.s

CMakeFiles/a.dir/test.cpp.o: CMakeFiles/a.dir/flags.make
CMakeFiles/a.dir/test.cpp.o: ../test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/simonqi/Documents/leetcode/c++/106/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/a.dir/test.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/a.dir/test.cpp.o -c /Users/simonqi/Documents/leetcode/c++/106/test.cpp

CMakeFiles/a.dir/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/a.dir/test.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/simonqi/Documents/leetcode/c++/106/test.cpp > CMakeFiles/a.dir/test.cpp.i

CMakeFiles/a.dir/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/a.dir/test.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/simonqi/Documents/leetcode/c++/106/test.cpp -o CMakeFiles/a.dir/test.cpp.s

# Object files for target a
a_OBJECTS = \
"CMakeFiles/a.dir/gtest_main.cpp.o" \
"CMakeFiles/a.dir/test.cpp.o"

# External object files for target a
a_EXTERNAL_OBJECTS =

a : CMakeFiles/a.dir/gtest_main.cpp.o
a : CMakeFiles/a.dir/test.cpp.o
a : CMakeFiles/a.dir/build.make
a : /usr/local/lib/libgtest.a
a : CMakeFiles/a.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/simonqi/Documents/leetcode/c++/106/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable a"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/a.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/a.dir/build: a

.PHONY : CMakeFiles/a.dir/build

CMakeFiles/a.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/a.dir/cmake_clean.cmake
.PHONY : CMakeFiles/a.dir/clean

CMakeFiles/a.dir/depend:
	cd /Users/simonqi/Documents/leetcode/c++/106/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/simonqi/Documents/leetcode/c++/106 /Users/simonqi/Documents/leetcode/c++/106 /Users/simonqi/Documents/leetcode/c++/106/build /Users/simonqi/Documents/leetcode/c++/106/build /Users/simonqi/Documents/leetcode/c++/106/build/CMakeFiles/a.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/a.dir/depend

