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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\My_repositories\GB_CPP_Base\Lesson_8

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\My_repositories\GB_CPP_Base\Lesson_8\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\Lesson_8.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\Lesson_8.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\Lesson_8.dir\flags.make

CMakeFiles\Lesson_8.dir\main.cpp.obj: CMakeFiles\Lesson_8.dir\flags.make
CMakeFiles\Lesson_8.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\My_repositories\GB_CPP_Base\Lesson_8\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Lesson_8.dir/main.cpp.obj"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1428~1.293\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Lesson_8.dir\main.cpp.obj /FdCMakeFiles\Lesson_8.dir\ /FS -c D:\My_repositories\GB_CPP_Base\Lesson_8\main.cpp
<<

CMakeFiles\Lesson_8.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lesson_8.dir/main.cpp.i"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1428~1.293\bin\Hostx86\x86\cl.exe > CMakeFiles\Lesson_8.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\My_repositories\GB_CPP_Base\Lesson_8\main.cpp
<<

CMakeFiles\Lesson_8.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lesson_8.dir/main.cpp.s"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1428~1.293\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Lesson_8.dir\main.cpp.s /c D:\My_repositories\GB_CPP_Base\Lesson_8\main.cpp
<<

# Object files for target Lesson_8
Lesson_8_OBJECTS = \
"CMakeFiles\Lesson_8.dir\main.cpp.obj"

# External object files for target Lesson_8
Lesson_8_EXTERNAL_OBJECTS =

Lesson_8.exe: CMakeFiles\Lesson_8.dir\main.cpp.obj
Lesson_8.exe: CMakeFiles\Lesson_8.dir\build.make
Lesson_8.exe: CMakeFiles\Lesson_8.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\My_repositories\GB_CPP_Base\Lesson_8\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Lesson_8.exe"
	"C:\Program Files\JetBrains\CLion 2020.1\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\Lesson_8.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\mt.exe --manifests  -- C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1428~1.293\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\Lesson_8.dir\objects1.rsp @<<
 /out:Lesson_8.exe /implib:Lesson_8.lib /pdb:D:\My_repositories\GB_CPP_Base\Lesson_8\cmake-build-debug\Lesson_8.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\Lesson_8.dir\build: Lesson_8.exe

.PHONY : CMakeFiles\Lesson_8.dir\build

CMakeFiles\Lesson_8.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Lesson_8.dir\cmake_clean.cmake
.PHONY : CMakeFiles\Lesson_8.dir\clean

CMakeFiles\Lesson_8.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" D:\My_repositories\GB_CPP_Base\Lesson_8 D:\My_repositories\GB_CPP_Base\Lesson_8 D:\My_repositories\GB_CPP_Base\Lesson_8\cmake-build-debug D:\My_repositories\GB_CPP_Base\Lesson_8\cmake-build-debug D:\My_repositories\GB_CPP_Base\Lesson_8\cmake-build-debug\CMakeFiles\Lesson_8.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\Lesson_8.dir\depend
