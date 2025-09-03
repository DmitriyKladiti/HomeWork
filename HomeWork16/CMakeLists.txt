cmake_minimum_required (VERSION 3.14)

project ("HomeWork16")

set(SRC
	HomeWork16.cpp
)

set(INCLUDE
	HomeWork16.h
)

add_executable(${PROJECT_NAME}
		${SRC}
		${INCLUDE}
)

target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_17)