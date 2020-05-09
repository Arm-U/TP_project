#include <iostream>
#include "Factories/EnglandUnitFactory.h"
#include "Factories/FranceUnitFactory.h"
#include "Client/ClientArmy.h"
#include "States/MartialState.h"
#include "States/EconomicState.h"
#include <vector>

int main() {
	std::shared_ptr<UnitFactory> england = std::make_shared<EnglandUnitFactory>();

	std::shared_ptr<UnitFactory> france = std::make_shared<FranceUnitFactory>();

	std::shared_ptr<ClientArmy> client = std::make_shared<ClientArmy>();
	client->setFactory(france);
	client->setPoints(200);

	std::shared_ptr<CompositeUnit> france_army = std::make_shared<CompositeUnit>();
	france_army->add_unit(client->createLegion(10, 5, 3));
	std::shared_ptr<CompositeUnit> legion = client->createLegion(1, 1, 1);
	
	france_army->add_unit(legion);
	
	france_army->erase_unit(legion);

	std::shared_ptr<Context> player = std::make_shared<Context>();
	std::shared_ptr<ClientArmy> army_maker = std::make_shared<ClientArmy>();

	army_maker->setFactory(england);
	army_maker->setPoints(200);

	std::shared_ptr<CompositeUnit> england_army = std::make_shared<CompositeUnit>();

	england_army->add_unit(army_maker->createLegion(10, 10, 2));

	player->setArmy(england_army);
	player->Request2();
	player->Request4();
	player->Request1(france_army);
	player->Request1(france_army);
	player->Request1(france_army);
	player->Request1(france_army);
	player->Request1(france_army);

	for (auto& item_legion : player->getArmy()->getSquad()) {
		for (auto& item : item_legion->getSquad()) {
			std::cout << item->getLevel() << " " << typeid(item).name() << " ";
			std::cout << item->getAttack() << " " << typeid(item).name() << "\n";
		}
	}

	player->Request3();

	for (auto& item_legion : player->getArmy()->getSquad()) {
		for (auto& item : item_legion->getSquad()) {
			std::cout << item->getLevel() << " " << typeid(item).name() << " ";
			std::cout << item->getAttack() << " " << typeid(item).name() << "\n";
		}
	}

	return 0;
}