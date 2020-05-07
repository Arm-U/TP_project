#pragma once

#include "../Factories/EnglandUnitFactory.h"
#include "../Factories/FranceUnitFactory.h"
#include "../Units/CompositeUnit.h"

class ClientArmy {
public:
	std::shared_ptr<CompositeUnit> createLegion(int wNum, int aNum, int sNum);

	void setFactory(std::shared_ptr<UnitFactory> new_factory);
	void setPoints(int new_points);

	int getPoints() const;
private:
	std::shared_ptr<UnitFactory> factory;
	int points = 100;
};