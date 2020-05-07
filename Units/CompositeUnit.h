#pragma once

#include <vector>
#include "Unit.h"

class CompositeUnit : public Unit {
public:
	void add_unit(std::shared_ptr<Unit> unit);
	void erase_unit(std::shared_ptr<Unit> unit);

	int getAttack() const;
	int getCurHealth() const;
	int getCost() const;

private:
	std::vector<std::shared_ptr<Unit>> squad;
};