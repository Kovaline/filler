# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_SOURCE_DIR = /Users/ikovalen/filler

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/ikovalen/filler/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/filler.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/filler.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/filler.dir/flags.make

CMakeFiles/filler.dir/filler.c.o: CMakeFiles/filler.dir/flags.make
CMakeFiles/filler.dir/filler.c.o: ../filler.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ikovalen/filler/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/filler.dir/filler.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/filler.dir/filler.c.o   -c /Users/ikovalen/filler/filler.c

CMakeFiles/filler.dir/filler.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/filler.dir/filler.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/ikovalen/filler/filler.c > CMakeFiles/filler.dir/filler.c.i

CMakeFiles/filler.dir/filler.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/filler.dir/filler.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/ikovalen/filler/filler.c -o CMakeFiles/filler.dir/filler.c.s

CMakeFiles/filler.dir/solve.c.o: CMakeFiles/filler.dir/flags.make
CMakeFiles/filler.dir/solve.c.o: ../solve.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ikovalen/filler/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/filler.dir/solve.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/filler.dir/solve.c.o   -c /Users/ikovalen/filler/solve.c

CMakeFiles/filler.dir/solve.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/filler.dir/solve.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/ikovalen/filler/solve.c > CMakeFiles/filler.dir/solve.c.i

CMakeFiles/filler.dir/solve.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/filler.dir/solve.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/ikovalen/filler/solve.c -o CMakeFiles/filler.dir/solve.c.s

CMakeFiles/filler.dir/tools.c.o: CMakeFiles/filler.dir/flags.make
CMakeFiles/filler.dir/tools.c.o: ../tools.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ikovalen/filler/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/filler.dir/tools.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/filler.dir/tools.c.o   -c /Users/ikovalen/filler/tools.c

CMakeFiles/filler.dir/tools.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/filler.dir/tools.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/ikovalen/filler/tools.c > CMakeFiles/filler.dir/tools.c.i

CMakeFiles/filler.dir/tools.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/filler.dir/tools.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/ikovalen/filler/tools.c -o CMakeFiles/filler.dir/tools.c.s

# Object files for target filler
filler_OBJECTS = \
"CMakeFiles/filler.dir/filler.c.o" \
"CMakeFiles/filler.dir/solve.c.o" \
"CMakeFiles/filler.dir/tools.c.o"

# External object files for target filler
filler_EXTERNAL_OBJECTS =

filler: CMakeFiles/filler.dir/filler.c.o
filler: CMakeFiles/filler.dir/solve.c.o
filler: CMakeFiles/filler.dir/tools.c.o
filler: CMakeFiles/filler.dir/build.make
filler: ../libft/libftprintf.a
filler: CMakeFiles/filler.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/ikovalen/filler/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable filler"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/filler.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/filler.dir/build: filler

.PHONY : CMakeFiles/filler.dir/build

CMakeFiles/filler.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/filler.dir/cmake_clean.cmake
.PHONY : CMakeFiles/filler.dir/clean

CMakeFiles/filler.dir/depend:
	cd /Users/ikovalen/filler/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ikovalen/filler /Users/ikovalen/filler /Users/ikovalen/filler/cmake-build-debug /Users/ikovalen/filler/cmake-build-debug /Users/ikovalen/filler/cmake-build-debug/CMakeFiles/filler.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/filler.dir/depend

