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
include CMakeFiles/AnalyzeECG.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/AnalyzeECG.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/AnalyzeECG.dir/flags.make

CMakeFiles/AnalyzeECG.dir/apps/analyzeECG.cpp.o: CMakeFiles/AnalyzeECG.dir/flags.make
CMakeFiles/AnalyzeECG.dir/apps/analyzeECG.cpp.o: ../apps/analyzeECG.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sohila/cmak/built/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/AnalyzeECG.dir/apps/analyzeECG.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AnalyzeECG.dir/apps/analyzeECG.cpp.o -c /home/sohila/cmak/apps/analyzeECG.cpp

CMakeFiles/AnalyzeECG.dir/apps/analyzeECG.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AnalyzeECG.dir/apps/analyzeECG.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sohila/cmak/apps/analyzeECG.cpp > CMakeFiles/AnalyzeECG.dir/apps/analyzeECG.cpp.i

CMakeFiles/AnalyzeECG.dir/apps/analyzeECG.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AnalyzeECG.dir/apps/analyzeECG.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sohila/cmak/apps/analyzeECG.cpp -o CMakeFiles/AnalyzeECG.dir/apps/analyzeECG.cpp.s

CMakeFiles/AnalyzeECG.dir/apps/analyzeECG.cpp.o.requires:

.PHONY : CMakeFiles/AnalyzeECG.dir/apps/analyzeECG.cpp.o.requires

CMakeFiles/AnalyzeECG.dir/apps/analyzeECG.cpp.o.provides: CMakeFiles/AnalyzeECG.dir/apps/analyzeECG.cpp.o.requires
	$(MAKE) -f CMakeFiles/AnalyzeECG.dir/build.make CMakeFiles/AnalyzeECG.dir/apps/analyzeECG.cpp.o.provides.build
.PHONY : CMakeFiles/AnalyzeECG.dir/apps/analyzeECG.cpp.o.provides

CMakeFiles/AnalyzeECG.dir/apps/analyzeECG.cpp.o.provides.build: CMakeFiles/AnalyzeECG.dir/apps/analyzeECG.cpp.o


# Object files for target AnalyzeECG
AnalyzeECG_OBJECTS = \
"CMakeFiles/AnalyzeECG.dir/apps/analyzeECG.cpp.o"

# External object files for target AnalyzeECG
AnalyzeECG_EXTERNAL_OBJECTS =

AnalyzeECG: CMakeFiles/AnalyzeECG.dir/apps/analyzeECG.cpp.o
AnalyzeECG: CMakeFiles/AnalyzeECG.dir/build.make
AnalyzeECG: CMakeFiles/AnalyzeECG.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sohila/cmak/built/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable AnalyzeECG"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/AnalyzeECG.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/AnalyzeECG.dir/build: AnalyzeECG

.PHONY : CMakeFiles/AnalyzeECG.dir/build

CMakeFiles/AnalyzeECG.dir/requires: CMakeFiles/AnalyzeECG.dir/apps/analyzeECG.cpp.o.requires

.PHONY : CMakeFiles/AnalyzeECG.dir/requires

CMakeFiles/AnalyzeECG.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/AnalyzeECG.dir/cmake_clean.cmake
.PHONY : CMakeFiles/AnalyzeECG.dir/clean

CMakeFiles/AnalyzeECG.dir/depend:
	cd /home/sohila/cmak/built && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sohila/cmak /home/sohila/cmak /home/sohila/cmak/built /home/sohila/cmak/built /home/sohila/cmak/built/CMakeFiles/AnalyzeECG.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/AnalyzeECG.dir/depend

