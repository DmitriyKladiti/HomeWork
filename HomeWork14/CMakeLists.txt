cmake_minimum_required (VERSION 3.14)

project ("HomeWork14")

set(SRC
	HomeWork14.cpp
)

set(INCLUDE
	HomeWork14.h
)

add_executable(${PROJECT_NAME}
		${SRC}
		${INCLUDE}
)

target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_17)