cmake_minimum_required (VERSION 3.14)

project ("HomeWork11")

add_subdirectory(
    "${CMAKE_SOURCE_DIR}/../extern/gsl"  

    "${CMAKE_BINARY_DIR}/gsl"
)

set(SRC
	HomeWork11.cpp
)

set(INCLUDE
	HomeWork11.h
)

add_executable(${PROJECT_NAME}
		${SRC}
		${INCLUDE}
)

target_link_libraries(${PROJECT_NAME} PRIVATE Microsoft.GSL::GSL)

target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_17)