#pragma once

#include "Unit.h"

class Swordsman : public Unit {
public:
	void turn(Unit& enemy) final;
	void upgrade(const int& cur_level) final;
};