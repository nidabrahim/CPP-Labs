# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_SOURCE_DIR = /home/LOCAL.ISIMA.FR/yonidabrah/Documents/MODL/TP/cpp-labs/TP6/tp_6

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/LOCAL.ISIMA.FR/yonidabrah/Documents/MODL/TP/cpp-labs/TP6/tp_6/build

# Utility rule file for tp6_autogen.

# Include the progress variables for this target.
include CMakeFiles/tp6_autogen.dir/progress.make

CMakeFiles/tp6_autogen: /usr/lib64/libQt5Widgets.so.5.7.1
CMakeFiles/tp6_autogen: /usr/lib64/libQt5Svg.so.5.7.1
CMakeFiles/tp6_autogen: qrc_cards.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/LOCAL.ISIMA.FR/yonidabrah/Documents/MODL/TP/cpp-labs/TP6/tp_6/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC for target tp6"
	/usr/bin/cmake -E cmake_autogen /home/LOCAL.ISIMA.FR/yonidabrah/Documents/MODL/TP/cpp-labs/TP6/tp_6/build/CMakeFiles/tp6_autogen.dir ""

qrc_cards.cpp: ../src/interface_qt/svg-cards.svg
qrc_cards.cpp: ../rcs/cards.qrc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/LOCAL.ISIMA.FR/yonidabrah/Documents/MODL/TP/cpp-labs/TP6/tp_6/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating qrc_cards.cpp"
	/usr/lib64/qt5/bin/rcc --name cards --output /home/LOCAL.ISIMA.FR/yonidabrah/Documents/MODL/TP/cpp-labs/TP6/tp_6/build/qrc_cards.cpp /home/LOCAL.ISIMA.FR/yonidabrah/Documents/MODL/TP/cpp-labs/TP6/tp_6/rcs/cards.qrc

tp6_autogen: CMakeFiles/tp6_autogen
tp6_autogen: qrc_cards.cpp
tp6_autogen: CMakeFiles/tp6_autogen.dir/build.make

.PHONY : tp6_autogen

# Rule to build all files generated by this target.
CMakeFiles/tp6_autogen.dir/build: tp6_autogen

.PHONY : CMakeFiles/tp6_autogen.dir/build

CMakeFiles/tp6_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tp6_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tp6_autogen.dir/clean

CMakeFiles/tp6_autogen.dir/depend:
	cd /home/LOCAL.ISIMA.FR/yonidabrah/Documents/MODL/TP/cpp-labs/TP6/tp_6/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/LOCAL.ISIMA.FR/yonidabrah/Documents/MODL/TP/cpp-labs/TP6/tp_6 /home/LOCAL.ISIMA.FR/yonidabrah/Documents/MODL/TP/cpp-labs/TP6/tp_6 /home/LOCAL.ISIMA.FR/yonidabrah/Documents/MODL/TP/cpp-labs/TP6/tp_6/build /home/LOCAL.ISIMA.FR/yonidabrah/Documents/MODL/TP/cpp-labs/TP6/tp_6/build /home/LOCAL.ISIMA.FR/yonidabrah/Documents/MODL/TP/cpp-labs/TP6/tp_6/build/CMakeFiles/tp6_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/tp6_autogen.dir/depend

