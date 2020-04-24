#include "Warrior.h"
#include <algorithm>

void Warrior::turn(Unit& enemy) {
	enemy.setCurHealth(std::max(enemy.getCurHealth() - attack, 0));
	if (enemy.getCurHealth())
		cur_health = std::max(getCurHealth() - enemy.getAttack(), 0);
	else
		level += 1;
}

void Warrior::upgrade(const int& cur_level) {
	if (!cur_level || cur_level % 2 != 0 || cur_level > 6)
		return;
	attack += 2;
	max_health += 5;
	cur_health = max_health;
}