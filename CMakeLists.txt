cmake_minimum_required(VERSION 3.17)
project(eulerOperator)

set(CMAKE_CXX_STANDARD 14)


#set(BOOST_ROOT D:/software/boost_1_71_0_install)
#set(CGAL_DIR "D:/software/cgal")
#set(CGAL_DO_NOT_WARN_ABOUT_CMAKE_BUILD_TYPE true)
#set(CGAL_USE_BASIC_VIEWER true)

#find_package(Qt5 COMPONENTS Core Gui Qml Quick REQUIRED)
#find_package(Boost REQUIRED)
#find_package(CGAL REQUIRED OPTIONAL_COMPONENTS Core)

add_definitions(-DCGAL_USE_BASIC_VIEWER)
include_directories(data
                    operator
                    render
                    external/glfw/include
                    external/glad/include
                    external/glm/
                    external/poly2triangles/)

include(cmake/LidanBase.cmake)
include(cmake/LidanBuild.cmake)

ADD_SUBSRC(datadir data)
ADD_SUBSRC(operatordir operator)
ADD_SUBSRC(renderdir render)
ADD_SUBSRC(gladdir external/glad/)
ADD_SUBSRC(poly2tridir external/poly2triangles)

Lidan_ADD_LIB(PATH "${CMAKE_CURRENT_SOURCE_DIR}/external/glfw/" INCLUDEDIRS includedir MSVC "TRUE" SOURCEDIR glfwsrc COMPONENTS "glfw3")

add_executable(eulerOperator main.cpp ${datadir} ${operatordir} ${renderdir} ${poly2tridir} ${gladdir} render/util.h)
target_link_libraries(${PROJECT_NAME} glfw3
#        CGAL::CGAL CGAL::CGAL_Core
        )