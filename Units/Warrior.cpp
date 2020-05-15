#include "Warrior.h"

void Warrior::turn(std::shared_ptr<Unit> enemy) {
	enemy->setCurHealth(std::max(enemy->getCurHealth() - attack, 0));
	if (enemy->getCurHealth())
		cur_health = std::max(getCurHealth() - enemy->getAttack(), 0);
	else
		level += 1;
}

void Warrior::upgrade() {
	if (!level || level % 2 != 0 || level > 6)
		return;
	attack += 2;
	max_health += 5;
	cur_health = max_health;
}