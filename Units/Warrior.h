#pragma once

#include "Unit.h"

class Warrior : public Unit {
public:
	void turn(Unit& enemy) final;
	void upgrade(const int& cur_level) final;
};