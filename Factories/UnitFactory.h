#pragma once 

#include <memory>
#include "../Units/Warrior.h"
#include "../Units/Archer.h"
#include "../Units/Swordsman.h"

class UnitFactory {
public:
	UnitFactory() = default;
	~UnitFactory() = default;

	virtual std::shared_ptr<Warrior> CreateWarrior() = 0;
	virtual std::shared_ptr<Archer> CreateArcher() = 0;
	virtual std::shared_ptr<Swordsman> CreateSwordsman() = 0;
};