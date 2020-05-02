#pragma once

#include "Unit.h"

class Swordsman : public Unit {
public:
	void turn(std::shared_ptr<Unit> enemy) final;
	void upgrade(const int& cur_level) final;
};