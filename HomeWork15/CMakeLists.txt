cmake_minimum_required (VERSION 3.14)

project ("HomeWork15")

set(SRC
	HomeWork15.cpp
)

set(INCLUDE
	HomeWork15.h
)

add_executable(${PROJECT_NAME}
		${SRC}
		${INCLUDE}
)

target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_17)