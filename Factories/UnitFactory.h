#pragma once 

#include <memory>
#include "../Units/Warrior.h"
#include "../Units/Archer.h"
#include "../Units/Swordsman.h"

class UnitFactory {
public:
	UnitFactory() = default;
	~UnitFactory() = default;

	virtual std::shared_ptr<Unit> CreateWarrior() = 0;
	virtual std::shared_ptr<Unit> CreateArcher() = 0;
	virtual std::shared_ptr<Unit> CreateSwordsman() = 0;
};