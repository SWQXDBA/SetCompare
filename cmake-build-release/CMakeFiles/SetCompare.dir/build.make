# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\SWQXDBA\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\203.7148.70\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\SWQXDBA\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\203.7148.70\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\SWQXDBA\CLionProjects\SetCompare

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\SWQXDBA\CLionProjects\SetCompare\cmake-build-release

# Include any dependencies generated for this target.
include CMakeFiles\SetCompare.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\SetCompare.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\SetCompare.dir\flags.make

CMakeFiles\SetCompare.dir\main.cpp.obj: CMakeFiles\SetCompare.dir\flags.make
CMakeFiles\SetCompare.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\SWQXDBA\CLionProjects\SetCompare\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SetCompare.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\SetCompare.dir\main.cpp.obj /FdCMakeFiles\SetCompare.dir\ /FS -c C:\Users\SWQXDBA\CLionProjects\SetCompare\main.cpp
<<

CMakeFiles\SetCompare.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SetCompare.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe > CMakeFiles\SetCompare.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\SWQXDBA\CLionProjects\SetCompare\main.cpp
<<

CMakeFiles\SetCompare.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SetCompare.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\SetCompare.dir\main.cpp.s /c C:\Users\SWQXDBA\CLionProjects\SetCompare\main.cpp
<<

# Object files for target SetCompare
SetCompare_OBJECTS = \
"CMakeFiles\SetCompare.dir\main.cpp.obj"

# External object files for target SetCompare
SetCompare_EXTERNAL_OBJECTS =

SetCompare.exe: CMakeFiles\SetCompare.dir\main.cpp.obj
SetCompare.exe: CMakeFiles\SetCompare.dir\build.make
SetCompare.exe: CMakeFiles\SetCompare.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\SWQXDBA\CLionProjects\SetCompare\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable SetCompare.exe"
	C:\Users\SWQXDBA\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\203.7148.70\bin\cmake\win\bin\cmake.exe -E vs_link_exe --intdir=CMakeFiles\SetCompare.dir --rc=C:\PROGRA~2\WI3CF2~1\8.1\bin\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\8.1\bin\x86\mt.exe --manifests  -- C:\PROGRA~2\MICROS~1.0\VC\bin\link.exe /nologo @CMakeFiles\SetCompare.dir\objects1.rsp @<<
 /out:SetCompare.exe /implib:SetCompare.lib /pdb:C:\Users\SWQXDBA\CLionProjects\SetCompare\cmake-build-release\SetCompare.pdb /version:0.0  /machine:X86 /INCREMENTAL:NO /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\SetCompare.dir\build: SetCompare.exe

.PHONY : CMakeFiles\SetCompare.dir\build

CMakeFiles\SetCompare.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\SetCompare.dir\cmake_clean.cmake
.PHONY : CMakeFiles\SetCompare.dir\clean

CMakeFiles\SetCompare.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\SWQXDBA\CLionProjects\SetCompare C:\Users\SWQXDBA\CLionProjects\SetCompare C:\Users\SWQXDBA\CLionProjects\SetCompare\cmake-build-release C:\Users\SWQXDBA\CLionProjects\SetCompare\cmake-build-release C:\Users\SWQXDBA\CLionProjects\SetCompare\cmake-build-release\CMakeFiles\SetCompare.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\SetCompare.dir\depend

