#include <iostream>
#include "Factories/EnglandUnitFactory.h"
#include "Factories/FranceUnitFactory.h"
#include "Client/ClientArmy.h"

int main() {
	std::shared_ptr<UnitFactory> england = std::make_shared<EnglandUnitFactory>();

	std::shared_ptr<Unit> warrior1 = england->CreateWarrior();

	std::cout << warrior1->getAttack() << "\n";
	std::cout << warrior1->getCurHealth() << "\n";
	std::cout << warrior1->getCost() << "\n";
	std::cout << warrior1->getLevel() << "\n";

	std::shared_ptr<UnitFactory> france = std::make_shared<FranceUnitFactory>();

	std::shared_ptr<Unit> fran_archer = france->CreateArcher();

	std::cout << fran_archer->getAttack() << "\n";
	std::cout << fran_archer->getCurHealth() << "\n";
	std::cout << fran_archer->getCost() << "\n";
	std::cout << fran_archer->getLevel() << "\n";

	fran_archer->turn(warrior1);

	std::cout << warrior1->getAttack() << "\n";
	std::cout << warrior1->getCurHealth() << "\n";
	std::cout << warrior1->getCost() << "\n";
	std::cout << warrior1->getLevel() << "\n";

	std::cout << fran_archer->getAttack() << "\n";
	std::cout << fran_archer->getCurHealth() << "\n";
	std::cout << fran_archer->getCost() << "\n";
	std::cout << fran_archer->getLevel() << "\n";

	std::shared_ptr<ClientArmy> client = std::make_shared<ClientArmy>();
	client->setFactory(france);
	client->setPoints(200);

	std::shared_ptr<CompositeUnit> army = std::make_shared<CompositeUnit>();
	army->add_unit(client->createLegion(10, 5, 3));
	std::shared_ptr<CompositeUnit> legion = client->createLegion(1, 1, 1);
	
	army->add_unit(legion);
	std::cout << army->getAttack() << "\n";
	std::cout << army->getCurHealth() << "\n";
	std::cout << army->getCost() << "\n";
	std::cout << client->getPoints() << "\n";
	
	army->erase_unit(legion);
	std::cout << army->getAttack() << "\n";
	std::cout << army->getCurHealth() << "\n";
	std::cout << army->getCost() << "\n";
	std::cout << client->getPoints() << "\n";

	return 0;
}