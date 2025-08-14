cmake_minimum_required (VERSION 3.14)

project ("HomeWork12")

set(SRC
	HomeWork12.cpp
)

set(INCLUDE
	HomeWork12.h
)

add_executable(${PROJECT_NAME}
		${SRC}
		${INCLUDE}
)

target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_17)