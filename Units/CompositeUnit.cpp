#include "CompositeUnit.h"

void CompositeUnit::add_unit(std::shared_ptr<Unit> unit) {
	squad.push_back(unit);
}

void CompositeUnit::erase_unit(std::shared_ptr<Unit> unit) {
	squad.erase(squad.begin() + std::count(squad.begin(), squad.end(), unit));
}

int CompositeUnit::getAttack() const {
	int attack = 0;
	for (const auto& unit : squad) {
		attack += unit->getAttack();
	}
	return attack;
}

int CompositeUnit::getCurHealth() const {
	int cur_health = 0;
	for (const auto& unit : squad) {
		cur_health += unit->getCurHealth();
	}
	return cur_health;
}

int CompositeUnit::getCost() const {
	int cost = 0;
	for (const auto& unit : squad) {
		cost += unit->getCost();
	}
	return cost;
}