#pragma once

#include "UnitFactory.h"

class EnglandUnitFactory : public UnitFactory {
public:
	std::shared_ptr<Warrior> CreateWarrior() override;
	std::shared_ptr<Archer> CreateArcher() override;
	std::shared_ptr<Swordsman> CreateSwordsman() override;
};