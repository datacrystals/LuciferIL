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
CMAKE_SOURCE_DIR = /home/tliao/Documents/NeoIL/Tests/CompileTest

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tliao/Documents/NeoIL/Tests/CompileTest/Build

# Include any dependencies generated for this target.
include CMakeFiles/NeoIL-CompileTest.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/NeoIL-CompileTest.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/NeoIL-CompileTest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/NeoIL-CompileTest.dir/flags.make

CMakeFiles/NeoIL-CompileTest.dir/Main.cpp.o: CMakeFiles/NeoIL-CompileTest.dir/flags.make
CMakeFiles/NeoIL-CompileTest.dir/Main.cpp.o: ../Main.cpp
CMakeFiles/NeoIL-CompileTest.dir/Main.cpp.o: CMakeFiles/NeoIL-CompileTest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tliao/Documents/NeoIL/Tests/CompileTest/Build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/NeoIL-CompileTest.dir/Main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/NeoIL-CompileTest.dir/Main.cpp.o -MF CMakeFiles/NeoIL-CompileTest.dir/Main.cpp.o.d -o CMakeFiles/NeoIL-CompileTest.dir/Main.cpp.o -c /home/tliao/Documents/NeoIL/Tests/CompileTest/Main.cpp

CMakeFiles/NeoIL-CompileTest.dir/Main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/NeoIL-CompileTest.dir/Main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tliao/Documents/NeoIL/Tests/CompileTest/Main.cpp > CMakeFiles/NeoIL-CompileTest.dir/Main.cpp.i

CMakeFiles/NeoIL-CompileTest.dir/Main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/NeoIL-CompileTest.dir/Main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tliao/Documents/NeoIL/Tests/CompileTest/Main.cpp -o CMakeFiles/NeoIL-CompileTest.dir/Main.cpp.s

# Object files for target NeoIL-CompileTest
NeoIL__CompileTest_OBJECTS = \
"CMakeFiles/NeoIL-CompileTest.dir/Main.cpp.o"

# External object files for target NeoIL-CompileTest
NeoIL__CompileTest_EXTERNAL_OBJECTS =

../Binaries/NeoIL-CompileTest: CMakeFiles/NeoIL-CompileTest.dir/Main.cpp.o
../Binaries/NeoIL-CompileTest: CMakeFiles/NeoIL-CompileTest.dir/build.make
../Binaries/NeoIL-CompileTest: ../Binaries/libNeoIL.so
../Binaries/NeoIL-CompileTest: ../Binaries/libFreeImage.so
../Binaries/NeoIL-CompileTest: NeoIL/Third-Party/DevIL/DevIL/lib/x64/libIL.so
../Binaries/NeoIL-CompileTest: CMakeFiles/NeoIL-CompileTest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/tliao/Documents/NeoIL/Tests/CompileTest/Build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../Binaries/NeoIL-CompileTest"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/NeoIL-CompileTest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/NeoIL-CompileTest.dir/build: ../Binaries/NeoIL-CompileTest
.PHONY : CMakeFiles/NeoIL-CompileTest.dir/build

CMakeFiles/NeoIL-CompileTest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/NeoIL-CompileTest.dir/cmake_clean.cmake
.PHONY : CMakeFiles/NeoIL-CompileTest.dir/clean

CMakeFiles/NeoIL-CompileTest.dir/depend:
	cd /home/tliao/Documents/NeoIL/Tests/CompileTest/Build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tliao/Documents/NeoIL/Tests/CompileTest /home/tliao/Documents/NeoIL/Tests/CompileTest /home/tliao/Documents/NeoIL/Tests/CompileTest/Build /home/tliao/Documents/NeoIL/Tests/CompileTest/Build /home/tliao/Documents/NeoIL/Tests/CompileTest/Build/CMakeFiles/NeoIL-CompileTest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/NeoIL-CompileTest.dir/depend
