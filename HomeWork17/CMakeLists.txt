cmake_minimum_required (VERSION 3.14)

project ("HomeWork17")

set(SRC
	HomeWork17.cpp
)

set(INCLUDE
	HomeWork17.h
)

add_executable(${PROJECT_NAME}
		${SRC}
		${INCLUDE}
)

target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_17)