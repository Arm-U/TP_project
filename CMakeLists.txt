cmake_minimum_required(VERSION 2.8)


project(test)

add_executable(main main.cpp)

include_directories(Units)

include_directories(Factories)

add_subdirectory(Units)

add_subdirectory(Factories)

set(ADDITIONAL_LIBRARIES unit abstract)

target_link_libraries(main ${ADDITIONAL_LIBRARIES})
