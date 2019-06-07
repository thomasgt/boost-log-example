cmake_minimum_required(VERSION 3.12)

project(boost_log_example VERSION 0.1.0)

find_package(Boost 1.65 COMPONENTS log program_options REQUIRED)

add_subdirectory(src)