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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/flicom/CLionProjects/ProgramowanieObiektoweC++

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/flicom/CLionProjects/ProgramowanieObiektoweC++/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ProgramowanieObiektoweC__.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ProgramowanieObiektoweC__.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ProgramowanieObiektoweC__.dir/flags.make

CMakeFiles/ProgramowanieObiektoweC__.dir/main.cpp.o: CMakeFiles/ProgramowanieObiektoweC__.dir/flags.make
CMakeFiles/ProgramowanieObiektoweC__.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/flicom/CLionProjects/ProgramowanieObiektoweC++/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ProgramowanieObiektoweC__.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ProgramowanieObiektoweC__.dir/main.cpp.o -c /Users/flicom/CLionProjects/ProgramowanieObiektoweC++/main.cpp

CMakeFiles/ProgramowanieObiektoweC__.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ProgramowanieObiektoweC__.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/flicom/CLionProjects/ProgramowanieObiektoweC++/main.cpp > CMakeFiles/ProgramowanieObiektoweC__.dir/main.cpp.i

CMakeFiles/ProgramowanieObiektoweC__.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ProgramowanieObiektoweC__.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/flicom/CLionProjects/ProgramowanieObiektoweC++/main.cpp -o CMakeFiles/ProgramowanieObiektoweC__.dir/main.cpp.s

# Object files for target ProgramowanieObiektoweC__
ProgramowanieObiektoweC___OBJECTS = \
"CMakeFiles/ProgramowanieObiektoweC__.dir/main.cpp.o"

# External object files for target ProgramowanieObiektoweC__
ProgramowanieObiektoweC___EXTERNAL_OBJECTS =

ProgramowanieObiektoweC__: CMakeFiles/ProgramowanieObiektoweC__.dir/main.cpp.o
ProgramowanieObiektoweC__: CMakeFiles/ProgramowanieObiektoweC__.dir/build.make
ProgramowanieObiektoweC__: CMakeFiles/ProgramowanieObiektoweC__.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/flicom/CLionProjects/ProgramowanieObiektoweC++/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ProgramowanieObiektoweC__"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ProgramowanieObiektoweC__.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ProgramowanieObiektoweC__.dir/build: ProgramowanieObiektoweC__

.PHONY : CMakeFiles/ProgramowanieObiektoweC__.dir/build

CMakeFiles/ProgramowanieObiektoweC__.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ProgramowanieObiektoweC__.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ProgramowanieObiektoweC__.dir/clean

CMakeFiles/ProgramowanieObiektoweC__.dir/depend:
	cd /Users/flicom/CLionProjects/ProgramowanieObiektoweC++/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/flicom/CLionProjects/ProgramowanieObiektoweC++ /Users/flicom/CLionProjects/ProgramowanieObiektoweC++ /Users/flicom/CLionProjects/ProgramowanieObiektoweC++/cmake-build-debug /Users/flicom/CLionProjects/ProgramowanieObiektoweC++/cmake-build-debug /Users/flicom/CLionProjects/ProgramowanieObiektoweC++/cmake-build-debug/CMakeFiles/ProgramowanieObiektoweC__.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ProgramowanieObiektoweC__.dir/depend

