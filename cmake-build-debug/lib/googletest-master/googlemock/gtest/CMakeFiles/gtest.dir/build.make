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
CMAKE_SOURCE_DIR = "/Users/noehsueh/UBA/Algoritmos I/TP/TP (I)/Enunciado TPI/template-alumnos"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/noehsueh/UBA/Algoritmos I/TP/TP (I)/Enunciado TPI/template-alumnos/cmake-build-debug"

# Include any dependencies generated for this target.
include lib/googletest-master/googlemock/gtest/CMakeFiles/gtest.dir/depend.make

# Include the progress variables for this target.
include lib/googletest-master/googlemock/gtest/CMakeFiles/gtest.dir/progress.make

# Include the compile flags for this target's objects.
include lib/googletest-master/googlemock/gtest/CMakeFiles/gtest.dir/flags.make

lib/googletest-master/googlemock/gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.o: lib/googletest-master/googlemock/gtest/CMakeFiles/gtest.dir/flags.make
lib/googletest-master/googlemock/gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.o: ../lib/googletest-master/googletest/src/gtest-all.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/noehsueh/UBA/Algoritmos I/TP/TP (I)/Enunciado TPI/template-alumnos/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/googletest-master/googlemock/gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.o"
	cd "/Users/noehsueh/UBA/Algoritmos I/TP/TP (I)/Enunciado TPI/template-alumnos/cmake-build-debug/lib/googletest-master/googlemock/gtest" && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gtest.dir/src/gtest-all.cc.o -c "/Users/noehsueh/UBA/Algoritmos I/TP/TP (I)/Enunciado TPI/template-alumnos/lib/googletest-master/googletest/src/gtest-all.cc"

lib/googletest-master/googlemock/gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gtest.dir/src/gtest-all.cc.i"
	cd "/Users/noehsueh/UBA/Algoritmos I/TP/TP (I)/Enunciado TPI/template-alumnos/cmake-build-debug/lib/googletest-master/googlemock/gtest" && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/noehsueh/UBA/Algoritmos I/TP/TP (I)/Enunciado TPI/template-alumnos/lib/googletest-master/googletest/src/gtest-all.cc" > CMakeFiles/gtest.dir/src/gtest-all.cc.i

lib/googletest-master/googlemock/gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gtest.dir/src/gtest-all.cc.s"
	cd "/Users/noehsueh/UBA/Algoritmos I/TP/TP (I)/Enunciado TPI/template-alumnos/cmake-build-debug/lib/googletest-master/googlemock/gtest" && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/noehsueh/UBA/Algoritmos I/TP/TP (I)/Enunciado TPI/template-alumnos/lib/googletest-master/googletest/src/gtest-all.cc" -o CMakeFiles/gtest.dir/src/gtest-all.cc.s

# Object files for target gtest
gtest_OBJECTS = \
"CMakeFiles/gtest.dir/src/gtest-all.cc.o"

# External object files for target gtest
gtest_EXTERNAL_OBJECTS =

lib/googletest-master/googlemock/gtest/libgtestd.a: lib/googletest-master/googlemock/gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.o
lib/googletest-master/googlemock/gtest/libgtestd.a: lib/googletest-master/googlemock/gtest/CMakeFiles/gtest.dir/build.make
lib/googletest-master/googlemock/gtest/libgtestd.a: lib/googletest-master/googlemock/gtest/CMakeFiles/gtest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/noehsueh/UBA/Algoritmos I/TP/TP (I)/Enunciado TPI/template-alumnos/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libgtestd.a"
	cd "/Users/noehsueh/UBA/Algoritmos I/TP/TP (I)/Enunciado TPI/template-alumnos/cmake-build-debug/lib/googletest-master/googlemock/gtest" && $(CMAKE_COMMAND) -P CMakeFiles/gtest.dir/cmake_clean_target.cmake
	cd "/Users/noehsueh/UBA/Algoritmos I/TP/TP (I)/Enunciado TPI/template-alumnos/cmake-build-debug/lib/googletest-master/googlemock/gtest" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gtest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/googletest-master/googlemock/gtest/CMakeFiles/gtest.dir/build: lib/googletest-master/googlemock/gtest/libgtestd.a

.PHONY : lib/googletest-master/googlemock/gtest/CMakeFiles/gtest.dir/build

lib/googletest-master/googlemock/gtest/CMakeFiles/gtest.dir/clean:
	cd "/Users/noehsueh/UBA/Algoritmos I/TP/TP (I)/Enunciado TPI/template-alumnos/cmake-build-debug/lib/googletest-master/googlemock/gtest" && $(CMAKE_COMMAND) -P CMakeFiles/gtest.dir/cmake_clean.cmake
.PHONY : lib/googletest-master/googlemock/gtest/CMakeFiles/gtest.dir/clean

lib/googletest-master/googlemock/gtest/CMakeFiles/gtest.dir/depend:
	cd "/Users/noehsueh/UBA/Algoritmos I/TP/TP (I)/Enunciado TPI/template-alumnos/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/noehsueh/UBA/Algoritmos I/TP/TP (I)/Enunciado TPI/template-alumnos" "/Users/noehsueh/UBA/Algoritmos I/TP/TP (I)/Enunciado TPI/template-alumnos/lib/googletest-master/googletest" "/Users/noehsueh/UBA/Algoritmos I/TP/TP (I)/Enunciado TPI/template-alumnos/cmake-build-debug" "/Users/noehsueh/UBA/Algoritmos I/TP/TP (I)/Enunciado TPI/template-alumnos/cmake-build-debug/lib/googletest-master/googlemock/gtest" "/Users/noehsueh/UBA/Algoritmos I/TP/TP (I)/Enunciado TPI/template-alumnos/cmake-build-debug/lib/googletest-master/googlemock/gtest/CMakeFiles/gtest.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : lib/googletest-master/googlemock/gtest/CMakeFiles/gtest.dir/depend

