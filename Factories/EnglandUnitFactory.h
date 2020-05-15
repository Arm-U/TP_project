#pragma once

#include "UnitFactory.h"

class EnglandUnitFactory : public UnitFactory {
public:
	std::shared_ptr<Unit> CreateWarrior() override;
	std::shared_ptr<Unit> CreateArcher() override;
	std::shared_ptr<Unit> CreateSwordsman() override;
};