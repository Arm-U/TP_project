#pragma once

#include "Unit.h"

class Swordsman : public Unit {
public:
	void turn(std::shared_ptr<Unit> enemy);
	void upgrade();
};