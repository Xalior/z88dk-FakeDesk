cmake_minimum_required(VERSION 3.10)
project(FakeDesk)

set(CMAKE_CXX_STANDARD 98)

add_executable(FakeDesk main.c markdown.c markdown.h paintbox.c paintbox.h coreutil.c coreutil.h)