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
CMAKE_COMMAND = "D:\software\clion\CLion 2020.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\software\clion\CLion 2020.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\lidan\CLionProjects\eulerOperator

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\lidan\CLionProjects\eulerOperator\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\eulerOperator.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\eulerOperator.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\eulerOperator.dir\flags.make

CMakeFiles\eulerOperator.dir\main.cpp.obj: CMakeFiles\eulerOperator.dir\flags.make
CMakeFiles\eulerOperator.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\lidan\CLionProjects\eulerOperator\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/eulerOperator.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\eulerOperator.dir\main.cpp.obj /FdCMakeFiles\eulerOperator.dir\ /FS -c C:\Users\lidan\CLionProjects\eulerOperator\main.cpp
<<

CMakeFiles\eulerOperator.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/eulerOperator.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx64\x64\cl.exe > CMakeFiles\eulerOperator.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\lidan\CLionProjects\eulerOperator\main.cpp
<<

CMakeFiles\eulerOperator.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/eulerOperator.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\eulerOperator.dir\main.cpp.s /c C:\Users\lidan\CLionProjects\eulerOperator\main.cpp
<<

CMakeFiles\eulerOperator.dir\data\halfEdge.cpp.obj: CMakeFiles\eulerOperator.dir\flags.make
CMakeFiles\eulerOperator.dir\data\halfEdge.cpp.obj: ..\data\halfEdge.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\lidan\CLionProjects\eulerOperator\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/eulerOperator.dir/data/halfEdge.cpp.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\eulerOperator.dir\data\halfEdge.cpp.obj /FdCMakeFiles\eulerOperator.dir\ /FS -c C:\Users\lidan\CLionProjects\eulerOperator\data\halfEdge.cpp
<<

CMakeFiles\eulerOperator.dir\data\halfEdge.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/eulerOperator.dir/data/halfEdge.cpp.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx64\x64\cl.exe > CMakeFiles\eulerOperator.dir\data\halfEdge.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\lidan\CLionProjects\eulerOperator\data\halfEdge.cpp
<<

CMakeFiles\eulerOperator.dir\data\halfEdge.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/eulerOperator.dir/data/halfEdge.cpp.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\eulerOperator.dir\data\halfEdge.cpp.s /c C:\Users\lidan\CLionProjects\eulerOperator\data\halfEdge.cpp
<<

CMakeFiles\eulerOperator.dir\data\vector_data.cpp.obj: CMakeFiles\eulerOperator.dir\flags.make
CMakeFiles\eulerOperator.dir\data\vector_data.cpp.obj: ..\data\vector_data.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\lidan\CLionProjects\eulerOperator\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/eulerOperator.dir/data/vector_data.cpp.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\eulerOperator.dir\data\vector_data.cpp.obj /FdCMakeFiles\eulerOperator.dir\ /FS -c C:\Users\lidan\CLionProjects\eulerOperator\data\vector_data.cpp
<<

CMakeFiles\eulerOperator.dir\data\vector_data.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/eulerOperator.dir/data/vector_data.cpp.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx64\x64\cl.exe > CMakeFiles\eulerOperator.dir\data\vector_data.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\lidan\CLionProjects\eulerOperator\data\vector_data.cpp
<<

CMakeFiles\eulerOperator.dir\data\vector_data.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/eulerOperator.dir/data/vector_data.cpp.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\eulerOperator.dir\data\vector_data.cpp.s /c C:\Users\lidan\CLionProjects\eulerOperator\data\vector_data.cpp
<<

CMakeFiles\eulerOperator.dir\operator\Build.cpp.obj: CMakeFiles\eulerOperator.dir\flags.make
CMakeFiles\eulerOperator.dir\operator\Build.cpp.obj: ..\operator\Build.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\lidan\CLionProjects\eulerOperator\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/eulerOperator.dir/operator/Build.cpp.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\eulerOperator.dir\operator\Build.cpp.obj /FdCMakeFiles\eulerOperator.dir\ /FS -c C:\Users\lidan\CLionProjects\eulerOperator\operator\Build.cpp
<<

CMakeFiles\eulerOperator.dir\operator\Build.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/eulerOperator.dir/operator/Build.cpp.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx64\x64\cl.exe > CMakeFiles\eulerOperator.dir\operator\Build.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\lidan\CLionProjects\eulerOperator\operator\Build.cpp
<<

CMakeFiles\eulerOperator.dir\operator\Build.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/eulerOperator.dir/operator/Build.cpp.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\eulerOperator.dir\operator\Build.cpp.s /c C:\Users\lidan\CLionProjects\eulerOperator\operator\Build.cpp
<<

CMakeFiles\eulerOperator.dir\operator\Writer.cpp.obj: CMakeFiles\eulerOperator.dir\flags.make
CMakeFiles\eulerOperator.dir\operator\Writer.cpp.obj: ..\operator\Writer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\lidan\CLionProjects\eulerOperator\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/eulerOperator.dir/operator/Writer.cpp.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\eulerOperator.dir\operator\Writer.cpp.obj /FdCMakeFiles\eulerOperator.dir\ /FS -c C:\Users\lidan\CLionProjects\eulerOperator\operator\Writer.cpp
<<

CMakeFiles\eulerOperator.dir\operator\Writer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/eulerOperator.dir/operator/Writer.cpp.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx64\x64\cl.exe > CMakeFiles\eulerOperator.dir\operator\Writer.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\lidan\CLionProjects\eulerOperator\operator\Writer.cpp
<<

CMakeFiles\eulerOperator.dir\operator\Writer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/eulerOperator.dir/operator/Writer.cpp.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\eulerOperator.dir\operator\Writer.cpp.s /c C:\Users\lidan\CLionProjects\eulerOperator\operator\Writer.cpp
<<

CMakeFiles\eulerOperator.dir\operator\operator.cpp.obj: CMakeFiles\eulerOperator.dir\flags.make
CMakeFiles\eulerOperator.dir\operator\operator.cpp.obj: ..\operator\operator.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\lidan\CLionProjects\eulerOperator\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/eulerOperator.dir/operator/operator.cpp.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\eulerOperator.dir\operator\operator.cpp.obj /FdCMakeFiles\eulerOperator.dir\ /FS -c C:\Users\lidan\CLionProjects\eulerOperator\operator\operator.cpp
<<

CMakeFiles\eulerOperator.dir\operator\operator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/eulerOperator.dir/operator/operator.cpp.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx64\x64\cl.exe > CMakeFiles\eulerOperator.dir\operator\operator.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\lidan\CLionProjects\eulerOperator\operator\operator.cpp
<<

CMakeFiles\eulerOperator.dir\operator\operator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/eulerOperator.dir/operator/operator.cpp.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\eulerOperator.dir\operator\operator.cpp.s /c C:\Users\lidan\CLionProjects\eulerOperator\operator\operator.cpp
<<

CMakeFiles\eulerOperator.dir\render\Shader.cpp.obj: CMakeFiles\eulerOperator.dir\flags.make
CMakeFiles\eulerOperator.dir\render\Shader.cpp.obj: ..\render\Shader.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\lidan\CLionProjects\eulerOperator\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/eulerOperator.dir/render/Shader.cpp.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\eulerOperator.dir\render\Shader.cpp.obj /FdCMakeFiles\eulerOperator.dir\ /FS -c C:\Users\lidan\CLionProjects\eulerOperator\render\Shader.cpp
<<

CMakeFiles\eulerOperator.dir\render\Shader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/eulerOperator.dir/render/Shader.cpp.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx64\x64\cl.exe > CMakeFiles\eulerOperator.dir\render\Shader.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\lidan\CLionProjects\eulerOperator\render\Shader.cpp
<<

CMakeFiles\eulerOperator.dir\render\Shader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/eulerOperator.dir/render/Shader.cpp.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\eulerOperator.dir\render\Shader.cpp.s /c C:\Users\lidan\CLionProjects\eulerOperator\render\Shader.cpp
<<

CMakeFiles\eulerOperator.dir\render\render.cpp.obj: CMakeFiles\eulerOperator.dir\flags.make
CMakeFiles\eulerOperator.dir\render\render.cpp.obj: ..\render\render.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\lidan\CLionProjects\eulerOperator\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/eulerOperator.dir/render/render.cpp.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\eulerOperator.dir\render\render.cpp.obj /FdCMakeFiles\eulerOperator.dir\ /FS -c C:\Users\lidan\CLionProjects\eulerOperator\render\render.cpp
<<

CMakeFiles\eulerOperator.dir\render\render.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/eulerOperator.dir/render/render.cpp.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx64\x64\cl.exe > CMakeFiles\eulerOperator.dir\render\render.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\lidan\CLionProjects\eulerOperator\render\render.cpp
<<

CMakeFiles\eulerOperator.dir\render\render.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/eulerOperator.dir/render/render.cpp.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\eulerOperator.dir\render\render.cpp.s /c C:\Users\lidan\CLionProjects\eulerOperator\render\render.cpp
<<

CMakeFiles\eulerOperator.dir\render\triangulation.cpp.obj: CMakeFiles\eulerOperator.dir\flags.make
CMakeFiles\eulerOperator.dir\render\triangulation.cpp.obj: ..\render\triangulation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\lidan\CLionProjects\eulerOperator\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/eulerOperator.dir/render/triangulation.cpp.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\eulerOperator.dir\render\triangulation.cpp.obj /FdCMakeFiles\eulerOperator.dir\ /FS -c C:\Users\lidan\CLionProjects\eulerOperator\render\triangulation.cpp
<<

CMakeFiles\eulerOperator.dir\render\triangulation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/eulerOperator.dir/render/triangulation.cpp.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx64\x64\cl.exe > CMakeFiles\eulerOperator.dir\render\triangulation.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\lidan\CLionProjects\eulerOperator\render\triangulation.cpp
<<

CMakeFiles\eulerOperator.dir\render\triangulation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/eulerOperator.dir/render/triangulation.cpp.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\eulerOperator.dir\render\triangulation.cpp.s /c C:\Users\lidan\CLionProjects\eulerOperator\render\triangulation.cpp
<<

CMakeFiles\eulerOperator.dir\external\poly2triangles\common\shapes.cc.obj: CMakeFiles\eulerOperator.dir\flags.make
CMakeFiles\eulerOperator.dir\external\poly2triangles\common\shapes.cc.obj: ..\external\poly2triangles\common\shapes.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\lidan\CLionProjects\eulerOperator\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/eulerOperator.dir/external/poly2triangles/common/shapes.cc.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\eulerOperator.dir\external\poly2triangles\common\shapes.cc.obj /FdCMakeFiles\eulerOperator.dir\ /FS -c C:\Users\lidan\CLionProjects\eulerOperator\external\poly2triangles\common\shapes.cc
<<

CMakeFiles\eulerOperator.dir\external\poly2triangles\common\shapes.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/eulerOperator.dir/external/poly2triangles/common/shapes.cc.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx64\x64\cl.exe > CMakeFiles\eulerOperator.dir\external\poly2triangles\common\shapes.cc.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\lidan\CLionProjects\eulerOperator\external\poly2triangles\common\shapes.cc
<<

CMakeFiles\eulerOperator.dir\external\poly2triangles\common\shapes.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/eulerOperator.dir/external/poly2triangles/common/shapes.cc.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\eulerOperator.dir\external\poly2triangles\common\shapes.cc.s /c C:\Users\lidan\CLionProjects\eulerOperator\external\poly2triangles\common\shapes.cc
<<

CMakeFiles\eulerOperator.dir\external\poly2triangles\sweep\advancing_front.cc.obj: CMakeFiles\eulerOperator.dir\flags.make
CMakeFiles\eulerOperator.dir\external\poly2triangles\sweep\advancing_front.cc.obj: ..\external\poly2triangles\sweep\advancing_front.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\lidan\CLionProjects\eulerOperator\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/eulerOperator.dir/external/poly2triangles/sweep/advancing_front.cc.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\eulerOperator.dir\external\poly2triangles\sweep\advancing_front.cc.obj /FdCMakeFiles\eulerOperator.dir\ /FS -c C:\Users\lidan\CLionProjects\eulerOperator\external\poly2triangles\sweep\advancing_front.cc
<<

CMakeFiles\eulerOperator.dir\external\poly2triangles\sweep\advancing_front.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/eulerOperator.dir/external/poly2triangles/sweep/advancing_front.cc.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx64\x64\cl.exe > CMakeFiles\eulerOperator.dir\external\poly2triangles\sweep\advancing_front.cc.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\lidan\CLionProjects\eulerOperator\external\poly2triangles\sweep\advancing_front.cc
<<

CMakeFiles\eulerOperator.dir\external\poly2triangles\sweep\advancing_front.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/eulerOperator.dir/external/poly2triangles/sweep/advancing_front.cc.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\eulerOperator.dir\external\poly2triangles\sweep\advancing_front.cc.s /c C:\Users\lidan\CLionProjects\eulerOperator\external\poly2triangles\sweep\advancing_front.cc
<<

CMakeFiles\eulerOperator.dir\external\poly2triangles\sweep\cdt.cc.obj: CMakeFiles\eulerOperator.dir\flags.make
CMakeFiles\eulerOperator.dir\external\poly2triangles\sweep\cdt.cc.obj: ..\external\poly2triangles\sweep\cdt.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\lidan\CLionProjects\eulerOperator\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/eulerOperator.dir/external/poly2triangles/sweep/cdt.cc.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\eulerOperator.dir\external\poly2triangles\sweep\cdt.cc.obj /FdCMakeFiles\eulerOperator.dir\ /FS -c C:\Users\lidan\CLionProjects\eulerOperator\external\poly2triangles\sweep\cdt.cc
<<

CMakeFiles\eulerOperator.dir\external\poly2triangles\sweep\cdt.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/eulerOperator.dir/external/poly2triangles/sweep/cdt.cc.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx64\x64\cl.exe > CMakeFiles\eulerOperator.dir\external\poly2triangles\sweep\cdt.cc.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\lidan\CLionProjects\eulerOperator\external\poly2triangles\sweep\cdt.cc
<<

CMakeFiles\eulerOperator.dir\external\poly2triangles\sweep\cdt.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/eulerOperator.dir/external/poly2triangles/sweep/cdt.cc.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\eulerOperator.dir\external\poly2triangles\sweep\cdt.cc.s /c C:\Users\lidan\CLionProjects\eulerOperator\external\poly2triangles\sweep\cdt.cc
<<

CMakeFiles\eulerOperator.dir\external\poly2triangles\sweep\sweep.cc.obj: CMakeFiles\eulerOperator.dir\flags.make
CMakeFiles\eulerOperator.dir\external\poly2triangles\sweep\sweep.cc.obj: ..\external\poly2triangles\sweep\sweep.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\lidan\CLionProjects\eulerOperator\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/eulerOperator.dir/external/poly2triangles/sweep/sweep.cc.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\eulerOperator.dir\external\poly2triangles\sweep\sweep.cc.obj /FdCMakeFiles\eulerOperator.dir\ /FS -c C:\Users\lidan\CLionProjects\eulerOperator\external\poly2triangles\sweep\sweep.cc
<<

CMakeFiles\eulerOperator.dir\external\poly2triangles\sweep\sweep.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/eulerOperator.dir/external/poly2triangles/sweep/sweep.cc.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx64\x64\cl.exe > CMakeFiles\eulerOperator.dir\external\poly2triangles\sweep\sweep.cc.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\lidan\CLionProjects\eulerOperator\external\poly2triangles\sweep\sweep.cc
<<

CMakeFiles\eulerOperator.dir\external\poly2triangles\sweep\sweep.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/eulerOperator.dir/external/poly2triangles/sweep/sweep.cc.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\eulerOperator.dir\external\poly2triangles\sweep\sweep.cc.s /c C:\Users\lidan\CLionProjects\eulerOperator\external\poly2triangles\sweep\sweep.cc
<<

CMakeFiles\eulerOperator.dir\external\poly2triangles\sweep\sweep_context.cc.obj: CMakeFiles\eulerOperator.dir\flags.make
CMakeFiles\eulerOperator.dir\external\poly2triangles\sweep\sweep_context.cc.obj: ..\external\poly2triangles\sweep\sweep_context.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\lidan\CLionProjects\eulerOperator\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/eulerOperator.dir/external/poly2triangles/sweep/sweep_context.cc.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\eulerOperator.dir\external\poly2triangles\sweep\sweep_context.cc.obj /FdCMakeFiles\eulerOperator.dir\ /FS -c C:\Users\lidan\CLionProjects\eulerOperator\external\poly2triangles\sweep\sweep_context.cc
<<

CMakeFiles\eulerOperator.dir\external\poly2triangles\sweep\sweep_context.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/eulerOperator.dir/external/poly2triangles/sweep/sweep_context.cc.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx64\x64\cl.exe > CMakeFiles\eulerOperator.dir\external\poly2triangles\sweep\sweep_context.cc.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\lidan\CLionProjects\eulerOperator\external\poly2triangles\sweep\sweep_context.cc
<<

CMakeFiles\eulerOperator.dir\external\poly2triangles\sweep\sweep_context.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/eulerOperator.dir/external/poly2triangles/sweep/sweep_context.cc.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\eulerOperator.dir\external\poly2triangles\sweep\sweep_context.cc.s /c C:\Users\lidan\CLionProjects\eulerOperator\external\poly2triangles\sweep\sweep_context.cc
<<

CMakeFiles\eulerOperator.dir\external\glad\src\glad.cpp.obj: CMakeFiles\eulerOperator.dir\flags.make
CMakeFiles\eulerOperator.dir\external\glad\src\glad.cpp.obj: ..\external\glad\src\glad.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\lidan\CLionProjects\eulerOperator\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/eulerOperator.dir/external/glad/src/glad.cpp.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\eulerOperator.dir\external\glad\src\glad.cpp.obj /FdCMakeFiles\eulerOperator.dir\ /FS -c C:\Users\lidan\CLionProjects\eulerOperator\external\glad\src\glad.cpp
<<

CMakeFiles\eulerOperator.dir\external\glad\src\glad.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/eulerOperator.dir/external/glad/src/glad.cpp.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx64\x64\cl.exe > CMakeFiles\eulerOperator.dir\external\glad\src\glad.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\lidan\CLionProjects\eulerOperator\external\glad\src\glad.cpp
<<

CMakeFiles\eulerOperator.dir\external\glad\src\glad.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/eulerOperator.dir/external/glad/src/glad.cpp.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\eulerOperator.dir\external\glad\src\glad.cpp.s /c C:\Users\lidan\CLionProjects\eulerOperator\external\glad\src\glad.cpp
<<

# Object files for target eulerOperator
eulerOperator_OBJECTS = \
"CMakeFiles\eulerOperator.dir\main.cpp.obj" \
"CMakeFiles\eulerOperator.dir\data\halfEdge.cpp.obj" \
"CMakeFiles\eulerOperator.dir\data\vector_data.cpp.obj" \
"CMakeFiles\eulerOperator.dir\operator\Build.cpp.obj" \
"CMakeFiles\eulerOperator.dir\operator\Writer.cpp.obj" \
"CMakeFiles\eulerOperator.dir\operator\operator.cpp.obj" \
"CMakeFiles\eulerOperator.dir\render\Shader.cpp.obj" \
"CMakeFiles\eulerOperator.dir\render\render.cpp.obj" \
"CMakeFiles\eulerOperator.dir\render\triangulation.cpp.obj" \
"CMakeFiles\eulerOperator.dir\external\poly2triangles\common\shapes.cc.obj" \
"CMakeFiles\eulerOperator.dir\external\poly2triangles\sweep\advancing_front.cc.obj" \
"CMakeFiles\eulerOperator.dir\external\poly2triangles\sweep\cdt.cc.obj" \
"CMakeFiles\eulerOperator.dir\external\poly2triangles\sweep\sweep.cc.obj" \
"CMakeFiles\eulerOperator.dir\external\poly2triangles\sweep\sweep_context.cc.obj" \
"CMakeFiles\eulerOperator.dir\external\glad\src\glad.cpp.obj"

# External object files for target eulerOperator
eulerOperator_EXTERNAL_OBJECTS =

eulerOperator.exe: CMakeFiles\eulerOperator.dir\main.cpp.obj
eulerOperator.exe: CMakeFiles\eulerOperator.dir\data\halfEdge.cpp.obj
eulerOperator.exe: CMakeFiles\eulerOperator.dir\data\vector_data.cpp.obj
eulerOperator.exe: CMakeFiles\eulerOperator.dir\operator\Build.cpp.obj
eulerOperator.exe: CMakeFiles\eulerOperator.dir\operator\Writer.cpp.obj
eulerOperator.exe: CMakeFiles\eulerOperator.dir\operator\operator.cpp.obj
eulerOperator.exe: CMakeFiles\eulerOperator.dir\render\Shader.cpp.obj
eulerOperator.exe: CMakeFiles\eulerOperator.dir\render\render.cpp.obj
eulerOperator.exe: CMakeFiles\eulerOperator.dir\render\triangulation.cpp.obj
eulerOperator.exe: CMakeFiles\eulerOperator.dir\external\poly2triangles\common\shapes.cc.obj
eulerOperator.exe: CMakeFiles\eulerOperator.dir\external\poly2triangles\sweep\advancing_front.cc.obj
eulerOperator.exe: CMakeFiles\eulerOperator.dir\external\poly2triangles\sweep\cdt.cc.obj
eulerOperator.exe: CMakeFiles\eulerOperator.dir\external\poly2triangles\sweep\sweep.cc.obj
eulerOperator.exe: CMakeFiles\eulerOperator.dir\external\poly2triangles\sweep\sweep_context.cc.obj
eulerOperator.exe: CMakeFiles\eulerOperator.dir\external\glad\src\glad.cpp.obj
eulerOperator.exe: CMakeFiles\eulerOperator.dir\build.make
eulerOperator.exe: CMakeFiles\eulerOperator.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\lidan\CLionProjects\eulerOperator\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Linking CXX executable eulerOperator.exe"
	"D:\software\clion\CLion 2020.2.3\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\eulerOperator.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x64\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x64\mt.exe --manifests  -- C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx64\x64\link.exe /nologo @CMakeFiles\eulerOperator.dir\objects1.rsp @<<
 /out:eulerOperator.exe /implib:eulerOperator.lib /pdb:C:\Users\lidan\CLionProjects\eulerOperator\cmake-build-debug\eulerOperator.pdb /version:0.0  /machine:x64 /debug /INCREMENTAL /subsystem:console   -LIBPATH:C:\Users\lidan\CLionProjects\eulerOperator\external\glfw\lib-vc2019  glfw3.lib kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\eulerOperator.dir\build: eulerOperator.exe

.PHONY : CMakeFiles\eulerOperator.dir\build

CMakeFiles\eulerOperator.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\eulerOperator.dir\cmake_clean.cmake
.PHONY : CMakeFiles\eulerOperator.dir\clean

CMakeFiles\eulerOperator.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\lidan\CLionProjects\eulerOperator C:\Users\lidan\CLionProjects\eulerOperator C:\Users\lidan\CLionProjects\eulerOperator\cmake-build-debug C:\Users\lidan\CLionProjects\eulerOperator\cmake-build-debug C:\Users\lidan\CLionProjects\eulerOperator\cmake-build-debug\CMakeFiles\eulerOperator.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\eulerOperator.dir\depend

