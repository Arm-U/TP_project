#include <iostream>
#include "Factories/EnglandUnitFactory.h"

int main() {
	std::shared_ptr<UnitFactory> england = std::make_shared<EnglandUnitFactory>();

	std::shared_ptr<Unit> warrior1 = england->CreateWarrior();

	std::cout << warrior1->getAttack() << "\n";
	std::cout << warrior1->getCurHealth() << "\n";
	std::cout << warrior1->getCost() << "\n";
	std::cout << warrior1->getLevel() << "\n";

	return 0;
}