cmake_minimum_required (VERSION 3.14)

project ("HomeWork13")

set(SRC
	HomeWork13.cpp
)

set(INCLUDE
	HomeWork13.h
)

add_executable(${PROJECT_NAME}
		${SRC}
		${INCLUDE}
)

target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_17)