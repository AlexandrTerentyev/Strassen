# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/alexandrterentyev/Unic/ParallelProgramming/Strassen

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/alexandrterentyev/Unic/ParallelProgramming/Strassen/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Strassen.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Strassen.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Strassen.dir/flags.make

CMakeFiles/Strassen.dir/main.cpp.o: CMakeFiles/Strassen.dir/flags.make
CMakeFiles/Strassen.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alexandrterentyev/Unic/ParallelProgramming/Strassen/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Strassen.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Strassen.dir/main.cpp.o -c /Users/alexandrterentyev/Unic/ParallelProgramming/Strassen/main.cpp

CMakeFiles/Strassen.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Strassen.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/alexandrterentyev/Unic/ParallelProgramming/Strassen/main.cpp > CMakeFiles/Strassen.dir/main.cpp.i

CMakeFiles/Strassen.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Strassen.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/alexandrterentyev/Unic/ParallelProgramming/Strassen/main.cpp -o CMakeFiles/Strassen.dir/main.cpp.s

CMakeFiles/Strassen.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Strassen.dir/main.cpp.o.requires

CMakeFiles/Strassen.dir/main.cpp.o.provides: CMakeFiles/Strassen.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Strassen.dir/build.make CMakeFiles/Strassen.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Strassen.dir/main.cpp.o.provides

CMakeFiles/Strassen.dir/main.cpp.o.provides.build: CMakeFiles/Strassen.dir/main.cpp.o


CMakeFiles/Strassen.dir/HelperFunctions.cpp.o: CMakeFiles/Strassen.dir/flags.make
CMakeFiles/Strassen.dir/HelperFunctions.cpp.o: ../HelperFunctions.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alexandrterentyev/Unic/ParallelProgramming/Strassen/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Strassen.dir/HelperFunctions.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Strassen.dir/HelperFunctions.cpp.o -c /Users/alexandrterentyev/Unic/ParallelProgramming/Strassen/HelperFunctions.cpp

CMakeFiles/Strassen.dir/HelperFunctions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Strassen.dir/HelperFunctions.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/alexandrterentyev/Unic/ParallelProgramming/Strassen/HelperFunctions.cpp > CMakeFiles/Strassen.dir/HelperFunctions.cpp.i

CMakeFiles/Strassen.dir/HelperFunctions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Strassen.dir/HelperFunctions.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/alexandrterentyev/Unic/ParallelProgramming/Strassen/HelperFunctions.cpp -o CMakeFiles/Strassen.dir/HelperFunctions.cpp.s

CMakeFiles/Strassen.dir/HelperFunctions.cpp.o.requires:

.PHONY : CMakeFiles/Strassen.dir/HelperFunctions.cpp.o.requires

CMakeFiles/Strassen.dir/HelperFunctions.cpp.o.provides: CMakeFiles/Strassen.dir/HelperFunctions.cpp.o.requires
	$(MAKE) -f CMakeFiles/Strassen.dir/build.make CMakeFiles/Strassen.dir/HelperFunctions.cpp.o.provides.build
.PHONY : CMakeFiles/Strassen.dir/HelperFunctions.cpp.o.provides

CMakeFiles/Strassen.dir/HelperFunctions.cpp.o.provides.build: CMakeFiles/Strassen.dir/HelperFunctions.cpp.o


# Object files for target Strassen
Strassen_OBJECTS = \
"CMakeFiles/Strassen.dir/main.cpp.o" \
"CMakeFiles/Strassen.dir/HelperFunctions.cpp.o"

# External object files for target Strassen
Strassen_EXTERNAL_OBJECTS =

Strassen: CMakeFiles/Strassen.dir/main.cpp.o
Strassen: CMakeFiles/Strassen.dir/HelperFunctions.cpp.o
Strassen: CMakeFiles/Strassen.dir/build.make
Strassen: CMakeFiles/Strassen.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/alexandrterentyev/Unic/ParallelProgramming/Strassen/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Strassen"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Strassen.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Strassen.dir/build: Strassen

.PHONY : CMakeFiles/Strassen.dir/build

CMakeFiles/Strassen.dir/requires: CMakeFiles/Strassen.dir/main.cpp.o.requires
CMakeFiles/Strassen.dir/requires: CMakeFiles/Strassen.dir/HelperFunctions.cpp.o.requires

.PHONY : CMakeFiles/Strassen.dir/requires

CMakeFiles/Strassen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Strassen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Strassen.dir/clean

CMakeFiles/Strassen.dir/depend:
	cd /Users/alexandrterentyev/Unic/ParallelProgramming/Strassen/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/alexandrterentyev/Unic/ParallelProgramming/Strassen /Users/alexandrterentyev/Unic/ParallelProgramming/Strassen /Users/alexandrterentyev/Unic/ParallelProgramming/Strassen/cmake-build-debug /Users/alexandrterentyev/Unic/ParallelProgramming/Strassen/cmake-build-debug /Users/alexandrterentyev/Unic/ParallelProgramming/Strassen/cmake-build-debug/CMakeFiles/Strassen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Strassen.dir/depend

