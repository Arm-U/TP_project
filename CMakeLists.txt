cmake_minimum_required(VERSION 2.8)
project(test CXX)

set(SOURCES
	Units/Unit.cpp
	Units/Warrior.cpp
	Units/Archer.cpp
	Units/Swordsman.cpp
	Factories/UnitFactory.cpp
	Factories/EnglandUnitFactory.cpp
	Factories/FranceUnitFactory.cpp
	Units/CompositeUnit.cpp
	Client/ClientArmy.cpp
	States/State.cpp
	States/Context.cpp
	States/MartialState.cpp
	States/EconomicState.cpp)

set(HEADERS 
	Units/Unit.h 
	Units/Warrior.h 
	Units/Archer.h 
	Units/Swordsman.h 
	Factories/UnitFactory.h 
	Factories/EnglandUnitFactory.h 
	Factories/FranceUnitFactory.h
	Units/CompositeUnit.h
	Client/ClientArmy.h
	States/State.h
	States/Context.h
	States/MartialState.h
	States/EconomicState.h)

add_executable(mainfile ${SOURCES} ${HEADERS}  main.cpp)

target_compile_options(mainfile PUBLIC -std=c++11 -fpermissive -w -Wall -Wextra)
