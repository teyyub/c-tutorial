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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Teyyub\workspace_c\c-tutorial\linked_list_insert

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Teyyub\workspace_c\c-tutorial\linked_list_insert\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\linked_list_insert.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\linked_list_insert.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\linked_list_insert.dir\flags.make

CMakeFiles\linked_list_insert.dir\main.c.obj: CMakeFiles\linked_list_insert.dir\flags.make
CMakeFiles\linked_list_insert.dir\main.c.obj: ..\main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Teyyub\workspace_c\c-tutorial\linked_list_insert\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/linked_list_insert.dir/main.c.obj"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\linked_list_insert.dir\main.c.obj /FdCMakeFiles\linked_list_insert.dir\ /FS -c C:\Users\Teyyub\workspace_c\c-tutorial\linked_list_insert\main.c
<<

CMakeFiles\linked_list_insert.dir\main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/linked_list_insert.dir/main.c.i"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe > CMakeFiles\linked_list_insert.dir\main.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Teyyub\workspace_c\c-tutorial\linked_list_insert\main.c
<<

CMakeFiles\linked_list_insert.dir\main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/linked_list_insert.dir/main.c.s"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\linked_list_insert.dir\main.c.s /c C:\Users\Teyyub\workspace_c\c-tutorial\linked_list_insert\main.c
<<

# Object files for target linked_list_insert
linked_list_insert_OBJECTS = \
"CMakeFiles\linked_list_insert.dir\main.c.obj"

# External object files for target linked_list_insert
linked_list_insert_EXTERNAL_OBJECTS =

linked_list_insert.exe: CMakeFiles\linked_list_insert.dir\main.c.obj
linked_list_insert.exe: CMakeFiles\linked_list_insert.dir\build.make
linked_list_insert.exe: CMakeFiles\linked_list_insert.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Teyyub\workspace_c\c-tutorial\linked_list_insert\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable linked_list_insert.exe"
	"C:\Program Files\JetBrains\CLion 2020.3.3\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\linked_list_insert.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\mt.exe --manifests  -- C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\linked_list_insert.dir\objects1.rsp @<<
 /out:linked_list_insert.exe /implib:linked_list_insert.lib /pdb:C:\Users\Teyyub\workspace_c\c-tutorial\linked_list_insert\cmake-build-debug\linked_list_insert.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\linked_list_insert.dir\build: linked_list_insert.exe

.PHONY : CMakeFiles\linked_list_insert.dir\build

CMakeFiles\linked_list_insert.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\linked_list_insert.dir\cmake_clean.cmake
.PHONY : CMakeFiles\linked_list_insert.dir\clean

CMakeFiles\linked_list_insert.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\Teyyub\workspace_c\c-tutorial\linked_list_insert C:\Users\Teyyub\workspace_c\c-tutorial\linked_list_insert C:\Users\Teyyub\workspace_c\c-tutorial\linked_list_insert\cmake-build-debug C:\Users\Teyyub\workspace_c\c-tutorial\linked_list_insert\cmake-build-debug C:\Users\Teyyub\workspace_c\c-tutorial\linked_list_insert\cmake-build-debug\CMakeFiles\linked_list_insert.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\linked_list_insert.dir\depend

