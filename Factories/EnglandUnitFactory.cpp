#include "EnglandUnitFactory.h"

std::shared_ptr<Warrior> EnglandUnitFactory::CreateWarrior() {
	std::shared_ptr<Warrior> new_warrior = std::make_shared<Warrior>();
	new_warrior->setAttack(3);
	new_warrior->setCurHealth(15);
	new_warrior->setMaxHealth(15);
	new_warrior->setCost(2);
	return new_warrior;
}

std::shared_ptr<Archer> EnglandUnitFactory::CreateArcher() {
	std::shared_ptr<Archer> new_archer = std::make_shared<Archer>();
	new_archer->setAttack(6);
	new_archer->setCurHealth(10);
	new_archer->setMaxHealth(10);
	new_archer->setCost(3);
	return new_archer;
}

std::shared_ptr<Swordsman> EnglandUnitFactory::CreateSwordsman() {
	std::shared_ptr<Swordsman> new_swordsman = std::make_shared<Swordsman>();
	new_swordsman->setAttack(5);
	new_swordsman->setCurHealth(15);
	new_swordsman->setMaxHealth(15);
	new_swordsman->setCost(5);
	return new_swordsman;
}