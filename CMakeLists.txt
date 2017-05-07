cmake_minimum_required(VERSION 2.8)

project(book_reader)

file(GLOB_RECURSE source
    "*.h"
    "*.cpp"
)

add_executable(${PROJECT_NAME} ${source})
