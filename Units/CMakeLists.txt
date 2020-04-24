cmake_minimum_required(VERSION 2.8)


project(units)

set(SOURCES Unit.cpp Warrior.cpp Archer.cpp Swordsman.cpp)

add_library(unit_ SHARED ${SOURCES})

target_link_libraries(unit_ unit)

install(TARGETS unit_
		LIBRARY DESTINATION lib
)
