# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/sohila/cmak

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sohila/cmak/built

# Include any dependencies generated for this target.
include CMakeFiles/AnalyzeDNA.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/AnalyzeDNA.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/AnalyzeDNA.dir/flags.make

CMakeFiles/AnalyzeDNA.dir/apps/analyzeDNA.cpp.o: CMakeFiles/AnalyzeDNA.dir/flags.make
CMakeFiles/AnalyzeDNA.dir/apps/analyzeDNA.cpp.o: ../apps/analyzeDNA.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sohila/cmak/built/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/AnalyzeDNA.dir/apps/analyzeDNA.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AnalyzeDNA.dir/apps/analyzeDNA.cpp.o -c /home/sohila/cmak/apps/analyzeDNA.cpp

CMakeFiles/AnalyzeDNA.dir/apps/analyzeDNA.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AnalyzeDNA.dir/apps/analyzeDNA.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sohila/cmak/apps/analyzeDNA.cpp > CMakeFiles/AnalyzeDNA.dir/apps/analyzeDNA.cpp.i

CMakeFiles/AnalyzeDNA.dir/apps/analyzeDNA.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AnalyzeDNA.dir/apps/analyzeDNA.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sohila/cmak/apps/analyzeDNA.cpp -o CMakeFiles/AnalyzeDNA.dir/apps/analyzeDNA.cpp.s

CMakeFiles/AnalyzeDNA.dir/apps/analyzeDNA.cpp.o.requires:

.PHONY : CMakeFiles/AnalyzeDNA.dir/apps/analyzeDNA.cpp.o.requires

CMakeFiles/AnalyzeDNA.dir/apps/analyzeDNA.cpp.o.provides: CMakeFiles/AnalyzeDNA.dir/apps/analyzeDNA.cpp.o.requires
	$(MAKE) -f CMakeFiles/AnalyzeDNA.dir/build.make CMakeFiles/AnalyzeDNA.dir/apps/analyzeDNA.cpp.o.provides.build
.PHONY : CMakeFiles/AnalyzeDNA.dir/apps/analyzeDNA.cpp.o.provides

CMakeFiles/AnalyzeDNA.dir/apps/analyzeDNA.cpp.o.provides.build: CMakeFiles/AnalyzeDNA.dir/apps/analyzeDNA.cpp.o


# Object files for target AnalyzeDNA
AnalyzeDNA_OBJECTS = \
"CMakeFiles/AnalyzeDNA.dir/apps/analyzeDNA.cpp.o"

# External object files for target AnalyzeDNA
AnalyzeDNA_EXTERNAL_OBJECTS =

AnalyzeDNA: CMakeFiles/AnalyzeDNA.dir/apps/analyzeDNA.cpp.o
AnalyzeDNA: CMakeFiles/AnalyzeDNA.dir/build.make
AnalyzeDNA: CMakeFiles/AnalyzeDNA.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sohila/cmak/built/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable AnalyzeDNA"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/AnalyzeDNA.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/AnalyzeDNA.dir/build: AnalyzeDNA

.PHONY : CMakeFiles/AnalyzeDNA.dir/build

CMakeFiles/AnalyzeDNA.dir/requires: CMakeFiles/AnalyzeDNA.dir/apps/analyzeDNA.cpp.o.requires

.PHONY : CMakeFiles/AnalyzeDNA.dir/requires

CMakeFiles/AnalyzeDNA.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/AnalyzeDNA.dir/cmake_clean.cmake
.PHONY : CMakeFiles/AnalyzeDNA.dir/clean

CMakeFiles/AnalyzeDNA.dir/depend:
	cd /home/sohila/cmak/built && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sohila/cmak /home/sohila/cmak /home/sohila/cmak/built /home/sohila/cmak/built /home/sohila/cmak/built/CMakeFiles/AnalyzeDNA.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/AnalyzeDNA.dir/depend

