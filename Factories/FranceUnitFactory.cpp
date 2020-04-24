#include "FranceUnitFactory.h"

std::shared_ptr<Warrior> FranceUnitFactory::CreateWarrior() {
	std::shared_ptr<Warrior> new_warrior = std::make_shared<Warrior>();
	new_warrior->setAttack(2);
	new_warrior->setCurHealth(17);
	new_warrior->setMaxHealth(17);
	new_warrior->setCost(2);
	return new_warrior;
}

std::shared_ptr<Archer> FranceUnitFactory::CreateArcher() {
	std::shared_ptr<Archer> new_archer = std::make_shared<Archer>();
	new_archer->setAttack(5);
	new_archer->setCurHealth(12);
	new_archer->setMaxHealth(12);
	new_archer->setCost(3);
	return new_archer;
}

std::shared_ptr<Swordsman> FranceUnitFactory::CreateSwordsman() {
	std::shared_ptr<Swordsman> new_swordsman = std::make_shared<Swordsman>();
	new_swordsman->setAttack(4);
	new_swordsman->setCurHealth(18);
	new_swordsman->setMaxHealth(18);
	new_swordsman->setCost(5);
	return new_swordsman;
}