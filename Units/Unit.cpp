#include "Unit.h"

int Unit::getAttack() const {
	return attack;
}

int Unit::getCurHealth() const {
	return cur_health;
}

int Unit::getCost() const {
	return cost;
}

int Unit::getLevel() const {
	return level;
}

void Unit::setAttack(const int& new_attack) {
	attack = new_attack;
}

void Unit::setCurHealth(const int& new_health) {
	cur_health = new_health;
}

void Unit::setMaxHealth(const int& new_health) {
	cur_health = new_health;
}

void Unit::setCost(const int& new_cost) {
	cost = new_cost;
}

void Unit::healthRecovery() {
	cur_health = max_health;
}

void Unit::levelUp() {
	++level;
}