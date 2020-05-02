#include "Swordsman.h"

void Swordsman::turn(std::shared_ptr<Unit> enemy) {
	enemy->setCurHealth(std::max(enemy->getCurHealth() - attack, 0));
	if (enemy->getCurHealth()) {
		cur_health = std::max(getCurHealth() - enemy->getAttack(), 0);
		if (cur_health) {
			enemy->setCurHealth(std::max(enemy->getCurHealth() - attack, 0));
			if (enemy->getCurHealth())
				cur_health = std::max(getCurHealth() - enemy->getAttack(), 0);
			else
				level += 1;
		}
	}
	else
		level += 1;
}

void Swordsman::upgrade(const int& cur_level) {
	if (!cur_level || cur_level % 5 != 0 || cur_level > 15)
		return;
	attack += 5;
	max_health += 10;
	cur_health = max_health;
}