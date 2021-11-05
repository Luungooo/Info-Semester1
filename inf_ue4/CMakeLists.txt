cmake_minimum_required(VERSION 3.20)
project (inf_ue4 C)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c geomittel.c)

add_executable(inf_ue4 ${SOURCE_FILES})
target_link_libraries(inf_ue4 PRIVATE m)
