cmake_minimum_required(VERSION 3.21)
project(20190647_20190230)

set(CMAKE_CXX_STANDARD 14)

include_directories(library1/include)

add_executable(20190647_20190230
        library1/include/Book.h
        library1/include/BookList.h
        library1/include/User.h
        library1/include/UserList.h
        library1/src/Book.cpp
        library1/src/BookList.cpp
        library1/src/User.cpp
        library1/src/UserList.cpp
        library1/main.cpp
        library1/names.cpp)
