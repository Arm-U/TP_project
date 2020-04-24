cmake_minimum_required(VERSION 2.8)


project(factory_test)

set(SOURCES UnitFactory.cpp EnglandUnitFactory.cpp)

add_library(unit_factory SHARED ${SOURCES})

target_link_libraries(unit_factory abstract)

install(TARGETS unit_factory
		LIBRARY DESTINATION lib
)
