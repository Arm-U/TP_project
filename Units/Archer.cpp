#include "Archer.h"

void Archer::turn(std::shared_ptr<Unit> enemy) {
	enemy->setCurHealth(std::max(enemy->getCurHealth() - attack, 0));
	if (!enemy->getCurHealth())
		++level;
}

void Archer::upgrade() {
	if (!level || level % 3 != 0 || level > 9)
		return;
	attack += 3;
	max_health += 3;
	cur_health = max_health;
}