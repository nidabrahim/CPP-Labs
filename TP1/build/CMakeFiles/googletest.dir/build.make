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
CMAKE_SOURCE_DIR = /home/youssef/ISIMA/Cpp/TP1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/youssef/ISIMA/Cpp/TP1/build

# Utility rule file for googletest.

# Include the progress variables for this target.
include CMakeFiles/googletest.dir/progress.make

CMakeFiles/googletest: CMakeFiles/googletest-complete


CMakeFiles/googletest-complete: ThirdParty/src/googletest-stamp/googletest-install
CMakeFiles/googletest-complete: ThirdParty/src/googletest-stamp/googletest-mkdir
CMakeFiles/googletest-complete: ThirdParty/src/googletest-stamp/googletest-download
CMakeFiles/googletest-complete: ThirdParty/src/googletest-stamp/googletest-update
CMakeFiles/googletest-complete: ThirdParty/src/googletest-stamp/googletest-patch
CMakeFiles/googletest-complete: ThirdParty/src/googletest-stamp/googletest-configure
CMakeFiles/googletest-complete: ThirdParty/src/googletest-stamp/googletest-build
CMakeFiles/googletest-complete: ThirdParty/src/googletest-stamp/googletest-install
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/youssef/ISIMA/Cpp/TP1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Completed 'googletest'"
	/usr/bin/cmake -E make_directory /home/youssef/ISIMA/Cpp/TP1/build/CMakeFiles
	/usr/bin/cmake -E touch /home/youssef/ISIMA/Cpp/TP1/build/CMakeFiles/googletest-complete
	/usr/bin/cmake -E touch /home/youssef/ISIMA/Cpp/TP1/build/ThirdParty/src/googletest-stamp/googletest-done

ThirdParty/src/googletest-stamp/googletest-install: ThirdParty/src/googletest-stamp/googletest-build
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/youssef/ISIMA/Cpp/TP1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "No install step for 'googletest'"
	cd /home/youssef/ISIMA/Cpp/TP1/build/ThirdParty/src/googletest-build && /usr/bin/cmake -E echo_append
	cd /home/youssef/ISIMA/Cpp/TP1/build/ThirdParty/src/googletest-build && /usr/bin/cmake -E touch /home/youssef/ISIMA/Cpp/TP1/build/ThirdParty/src/googletest-stamp/googletest-install

ThirdParty/src/googletest-stamp/googletest-mkdir:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/youssef/ISIMA/Cpp/TP1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Creating directories for 'googletest'"
	/usr/bin/cmake -E make_directory /home/youssef/ISIMA/Cpp/TP1/build/ThirdParty/src/googletest
	/usr/bin/cmake -E make_directory /home/youssef/ISIMA/Cpp/TP1/build/ThirdParty/src/googletest-build
	/usr/bin/cmake -E make_directory /home/youssef/ISIMA/Cpp/TP1/build/ThirdParty
	/usr/bin/cmake -E make_directory /home/youssef/ISIMA/Cpp/TP1/build/ThirdParty/tmp
	/usr/bin/cmake -E make_directory /home/youssef/ISIMA/Cpp/TP1/build/ThirdParty/src/googletest-stamp
	/usr/bin/cmake -E make_directory /home/youssef/ISIMA/Cpp/TP1/build/ThirdParty/src
	/usr/bin/cmake -E touch /home/youssef/ISIMA/Cpp/TP1/build/ThirdParty/src/googletest-stamp/googletest-mkdir

ThirdParty/src/googletest-stamp/googletest-download: ThirdParty/src/googletest-stamp/googletest-svninfo.txt
ThirdParty/src/googletest-stamp/googletest-download: ThirdParty/src/googletest-stamp/googletest-mkdir
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/youssef/ISIMA/Cpp/TP1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Performing download step (SVN checkout) for 'googletest'"
	cd /home/youssef/ISIMA/Cpp/TP1/build/ThirdParty/src && /usr/bin/cmake -P /home/youssef/ISIMA/Cpp/TP1/build/ThirdParty/src/googletest-stamp/googletest-download-.cmake
	cd /home/youssef/ISIMA/Cpp/TP1/build/ThirdParty/src && /usr/bin/cmake -E touch /home/youssef/ISIMA/Cpp/TP1/build/ThirdParty/src/googletest-stamp/googletest-download

ThirdParty/src/googletest-stamp/googletest-update: ThirdParty/src/googletest-stamp/googletest-download
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/youssef/ISIMA/Cpp/TP1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Performing update step (SVN update) for 'googletest'"
	cd /home/youssef/ISIMA/Cpp/TP1/build/ThirdParty/src/googletest && /usr/bin/svn up --non-interactive

ThirdParty/src/googletest-stamp/googletest-patch: ThirdParty/src/googletest-stamp/googletest-download
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/youssef/ISIMA/Cpp/TP1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "No patch step for 'googletest'"
	/usr/bin/cmake -E echo_append
	/usr/bin/cmake -E touch /home/youssef/ISIMA/Cpp/TP1/build/ThirdParty/src/googletest-stamp/googletest-patch

ThirdParty/src/googletest-stamp/googletest-configure: ThirdParty/tmp/googletest-cfgcmd.txt
ThirdParty/src/googletest-stamp/googletest-configure: ThirdParty/src/googletest-stamp/googletest-update
ThirdParty/src/googletest-stamp/googletest-configure: ThirdParty/src/googletest-stamp/googletest-patch
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/youssef/ISIMA/Cpp/TP1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Performing configure step for 'googletest'"
	cd /home/youssef/ISIMA/Cpp/TP1/build/ThirdParty/src/googletest-build && /usr/bin/cmake -P /home/youssef/ISIMA/Cpp/TP1/build/ThirdParty/src/googletest-stamp/googletest-configure-.cmake
	cd /home/youssef/ISIMA/Cpp/TP1/build/ThirdParty/src/googletest-build && /usr/bin/cmake -E touch /home/youssef/ISIMA/Cpp/TP1/build/ThirdParty/src/googletest-stamp/googletest-configure

ThirdParty/src/googletest-stamp/googletest-build: ThirdParty/src/googletest-stamp/googletest-configure
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/youssef/ISIMA/Cpp/TP1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Performing build step for 'googletest'"
	cd /home/youssef/ISIMA/Cpp/TP1/build/ThirdParty/src/googletest-build && /usr/bin/cmake -Dmake=$(MAKE) -P /home/youssef/ISIMA/Cpp/TP1/build/ThirdParty/src/googletest-stamp/googletest-build-.cmake
	cd /home/youssef/ISIMA/Cpp/TP1/build/ThirdParty/src/googletest-build && /usr/bin/cmake -E touch /home/youssef/ISIMA/Cpp/TP1/build/ThirdParty/src/googletest-stamp/googletest-build

googletest: CMakeFiles/googletest
googletest: CMakeFiles/googletest-complete
googletest: ThirdParty/src/googletest-stamp/googletest-install
googletest: ThirdParty/src/googletest-stamp/googletest-mkdir
googletest: ThirdParty/src/googletest-stamp/googletest-download
googletest: ThirdParty/src/googletest-stamp/googletest-update
googletest: ThirdParty/src/googletest-stamp/googletest-patch
googletest: ThirdParty/src/googletest-stamp/googletest-configure
googletest: ThirdParty/src/googletest-stamp/googletest-build
googletest: CMakeFiles/googletest.dir/build.make

.PHONY : googletest

# Rule to build all files generated by this target.
CMakeFiles/googletest.dir/build: googletest

.PHONY : CMakeFiles/googletest.dir/build

CMakeFiles/googletest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/googletest.dir/cmake_clean.cmake
.PHONY : CMakeFiles/googletest.dir/clean

CMakeFiles/googletest.dir/depend:
	cd /home/youssef/ISIMA/Cpp/TP1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/youssef/ISIMA/Cpp/TP1 /home/youssef/ISIMA/Cpp/TP1 /home/youssef/ISIMA/Cpp/TP1/build /home/youssef/ISIMA/Cpp/TP1/build /home/youssef/ISIMA/Cpp/TP1/build/CMakeFiles/googletest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/googletest.dir/depend

