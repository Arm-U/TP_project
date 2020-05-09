#pragma once

#include <vector>
#include "Unit.h"

class CompositeUnit : public Unit {
public:
	void add_unit(std::shared_ptr<Unit> unit) override;
	void erase_unit(std::shared_ptr<Unit> unit) override;

	int getAttack() const override;
	int getCurHealth() const override;
	int getCost() const override;

	void upgrade() override;
	void turn(std::shared_ptr<Unit> enemy) override;

	void healthRecovery() override;
	void levelUp() override;

	std::vector<std::shared_ptr<Unit>> getSquad() const override;

private:
	std::vector<std::shared_ptr<Unit>> squad;
};