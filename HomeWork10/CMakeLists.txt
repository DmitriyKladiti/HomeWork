cmake_minimum_required (VERSION 3.14)

project ("HomeWork10")

set(SRC
	HomeWork10.cpp
)

set(INCLUDE
	HomeWork10.h
)

add_executable(${PROJECT_NAME}
		${SRC}
		${INCLUDE}
)

target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_17)