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
include CMakeFiles/sbe201_unique_words.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/sbe201_unique_words.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sbe201_unique_words.dir/flags.make

CMakeFiles/sbe201_unique_words.dir/apps/unique_words.cpp.o: CMakeFiles/sbe201_unique_words.dir/flags.make
CMakeFiles/sbe201_unique_words.dir/apps/unique_words.cpp.o: ../apps/unique_words.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sohila/cmak/built/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sbe201_unique_words.dir/apps/unique_words.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sbe201_unique_words.dir/apps/unique_words.cpp.o -c /home/sohila/cmak/apps/unique_words.cpp

CMakeFiles/sbe201_unique_words.dir/apps/unique_words.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sbe201_unique_words.dir/apps/unique_words.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sohila/cmak/apps/unique_words.cpp > CMakeFiles/sbe201_unique_words.dir/apps/unique_words.cpp.i

CMakeFiles/sbe201_unique_words.dir/apps/unique_words.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sbe201_unique_words.dir/apps/unique_words.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sohila/cmak/apps/unique_words.cpp -o CMakeFiles/sbe201_unique_words.dir/apps/unique_words.cpp.s

CMakeFiles/sbe201_unique_words.dir/apps/unique_words.cpp.o.requires:

.PHONY : CMakeFiles/sbe201_unique_words.dir/apps/unique_words.cpp.o.requires

CMakeFiles/sbe201_unique_words.dir/apps/unique_words.cpp.o.provides: CMakeFiles/sbe201_unique_words.dir/apps/unique_words.cpp.o.requires
	$(MAKE) -f CMakeFiles/sbe201_unique_words.dir/build.make CMakeFiles/sbe201_unique_words.dir/apps/unique_words.cpp.o.provides.build
.PHONY : CMakeFiles/sbe201_unique_words.dir/apps/unique_words.cpp.o.provides

CMakeFiles/sbe201_unique_words.dir/apps/unique_words.cpp.o.provides.build: CMakeFiles/sbe201_unique_words.dir/apps/unique_words.cpp.o


# Object files for target sbe201_unique_words
sbe201_unique_words_OBJECTS = \
"CMakeFiles/sbe201_unique_words.dir/apps/unique_words.cpp.o"

# External object files for target sbe201_unique_words
sbe201_unique_words_EXTERNAL_OBJECTS =

sbe201_unique_words: CMakeFiles/sbe201_unique_words.dir/apps/unique_words.cpp.o
sbe201_unique_words: CMakeFiles/sbe201_unique_words.dir/build.make
sbe201_unique_words: CMakeFiles/sbe201_unique_words.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sohila/cmak/built/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable sbe201_unique_words"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sbe201_unique_words.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sbe201_unique_words.dir/build: sbe201_unique_words

.PHONY : CMakeFiles/sbe201_unique_words.dir/build

CMakeFiles/sbe201_unique_words.dir/requires: CMakeFiles/sbe201_unique_words.dir/apps/unique_words.cpp.o.requires

.PHONY : CMakeFiles/sbe201_unique_words.dir/requires

CMakeFiles/sbe201_unique_words.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sbe201_unique_words.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sbe201_unique_words.dir/clean

CMakeFiles/sbe201_unique_words.dir/depend:
	cd /home/sohila/cmak/built && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sohila/cmak /home/sohila/cmak /home/sohila/cmak/built /home/sohila/cmak/built /home/sohila/cmak/built/CMakeFiles/sbe201_unique_words.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sbe201_unique_words.dir/depend

