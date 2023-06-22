cmake_minimum_required(VERSION 3.25)
project(OpenGL)

find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)

include_directories(${OPENGL_INCLUDE_DIRS} ${GLUT_INCLUDE_DIRS})

add_executable(OpenGL Main/tetrahedron.cpp)

target_link_libraries(OpenGL ${OPENGL_LIBRARIES} ${GLUT_LIBRARY})
