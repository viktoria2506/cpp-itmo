# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.9

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2017.3.4\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2017.3.4\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\vikac\Desktop\codes\Array

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\vikac\Desktop\codes\Array\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Array.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Array.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Array.dir/flags.make

CMakeFiles/Array.dir/main.cpp.obj: CMakeFiles/Array.dir/flags.make
CMakeFiles/Array.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\vikac\Desktop\codes\Array\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Array.dir/main.cpp.obj"
	C:\PROGRA~2\CODEBL~1\MinGW\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Array.dir\main.cpp.obj -c C:\Users\vikac\Desktop\codes\Array\main.cpp

CMakeFiles/Array.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Array.dir/main.cpp.i"
	C:\PROGRA~2\CODEBL~1\MinGW\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\vikac\Desktop\codes\Array\main.cpp > CMakeFiles\Array.dir\main.cpp.i

CMakeFiles/Array.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Array.dir/main.cpp.s"
	C:\PROGRA~2\CODEBL~1\MinGW\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\vikac\Desktop\codes\Array\main.cpp -o CMakeFiles\Array.dir\main.cpp.s

CMakeFiles/Array.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/Array.dir/main.cpp.obj.requires

CMakeFiles/Array.dir/main.cpp.obj.provides: CMakeFiles/Array.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\Array.dir\build.make CMakeFiles/Array.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/Array.dir/main.cpp.obj.provides

CMakeFiles/Array.dir/main.cpp.obj.provides.build: CMakeFiles/Array.dir/main.cpp.obj


CMakeFiles/Array.dir/MyClass.cpp.obj: CMakeFiles/Array.dir/flags.make
CMakeFiles/Array.dir/MyClass.cpp.obj: ../MyClass.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\vikac\Desktop\codes\Array\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Array.dir/MyClass.cpp.obj"
	C:\PROGRA~2\CODEBL~1\MinGW\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Array.dir\MyClass.cpp.obj -c C:\Users\vikac\Desktop\codes\Array\MyClass.cpp

CMakeFiles/Array.dir/MyClass.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Array.dir/MyClass.cpp.i"
	C:\PROGRA~2\CODEBL~1\MinGW\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\vikac\Desktop\codes\Array\MyClass.cpp > CMakeFiles\Array.dir\MyClass.cpp.i

CMakeFiles/Array.dir/MyClass.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Array.dir/MyClass.cpp.s"
	C:\PROGRA~2\CODEBL~1\MinGW\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\vikac\Desktop\codes\Array\MyClass.cpp -o CMakeFiles\Array.dir\MyClass.cpp.s

CMakeFiles/Array.dir/MyClass.cpp.obj.requires:

.PHONY : CMakeFiles/Array.dir/MyClass.cpp.obj.requires

CMakeFiles/Array.dir/MyClass.cpp.obj.provides: CMakeFiles/Array.dir/MyClass.cpp.obj.requires
	$(MAKE) -f CMakeFiles\Array.dir\build.make CMakeFiles/Array.dir/MyClass.cpp.obj.provides.build
.PHONY : CMakeFiles/Array.dir/MyClass.cpp.obj.provides

CMakeFiles/Array.dir/MyClass.cpp.obj.provides.build: CMakeFiles/Array.dir/MyClass.cpp.obj


# Object files for target Array
Array_OBJECTS = \
"CMakeFiles/Array.dir/main.cpp.obj" \
"CMakeFiles/Array.dir/MyClass.cpp.obj"

# External object files for target Array
Array_EXTERNAL_OBJECTS =

Array.exe: CMakeFiles/Array.dir/main.cpp.obj
Array.exe: CMakeFiles/Array.dir/MyClass.cpp.obj
Array.exe: CMakeFiles/Array.dir/build.make
Array.exe: CMakeFiles/Array.dir/linklibs.rsp
Array.exe: CMakeFiles/Array.dir/objects1.rsp
Array.exe: CMakeFiles/Array.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\vikac\Desktop\codes\Array\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Array.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Array.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Array.dir/build: Array.exe

.PHONY : CMakeFiles/Array.dir/build

CMakeFiles/Array.dir/requires: CMakeFiles/Array.dir/main.cpp.obj.requires
CMakeFiles/Array.dir/requires: CMakeFiles/Array.dir/MyClass.cpp.obj.requires

.PHONY : CMakeFiles/Array.dir/requires

CMakeFiles/Array.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Array.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Array.dir/clean

CMakeFiles/Array.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\vikac\Desktop\codes\Array C:\Users\vikac\Desktop\codes\Array C:\Users\vikac\Desktop\codes\Array\cmake-build-debug C:\Users\vikac\Desktop\codes\Array\cmake-build-debug C:\Users\vikac\Desktop\codes\Array\cmake-build-debug\CMakeFiles\Array.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Array.dir/depend
