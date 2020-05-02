#pragma once

#include "UnitFactory.h"

class FranceUnitFactory : public UnitFactory {
public:
	std::shared_ptr<Unit> CreateWarrior() override;
	std::shared_ptr<Unit> CreateArcher() override;
	std::shared_ptr<Unit> CreateSwordsman() override;
};