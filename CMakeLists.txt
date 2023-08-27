cmake_minimum_required(VERSION 3.20)
project(HomeWorkAdv-4-1)

set(SOURCES HomeWorkAdv-4-1.cpp List.cpp ListNode.cpp)
set(HEADERS List.h ListNode.h)

add_executable(HomeWorkAdv-4-1 ${SOURCES} ${HEADERS})
add_subdirectory(../Catch2 Catch2-build)
target_link_libraries(HomeWorkAdv-4-1 PRIVATE Catch2::Catch2)
