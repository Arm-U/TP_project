#include "ClientMain.h"

ClientMain::ClientMain(int n) {
	std::shared_ptr<UnitFactory> enemy_factory;
	std::shared_ptr<ClientArmy> enemy_client;
	if (n) {
		factory = std::make_shared<EnglandUnitFactory>();
		enemy_factory = std::make_shared<FranceUnitFactory>();
	}
	else {
		factory = std::make_shared<FranceUnitFactory>();
		enemy_factory = std::make_shared<EnglandUnitFactory>();
	}
	client = std::make_shared<ClientArmy>();
	army = std::make_shared<CompositeUnit>();
	client->setFactory(factory);
	client->setPoints(200);
	player = std::make_shared<Context>();
	player->army = army;

	enemy_client = std::make_shared<ClientArmy>();
	enemy = std::make_shared<CompositeUnit>();
	enemy_client->setFactory(enemy_factory);
	enemy->add_unit(enemy_client->createLegion(15, 10, 5));
}

void ClientMain::add(int war, int arch, int swman) {
	try {
		army->add_unit(client->createLegion(war, arch, swman));
	}
	catch (std::exception& ex) {
		std::cout << ex.what() << "\n";
	}
}

void ClientMain::attack() {
	player->Request1(enemy);
}

void ClientMain::retreat() {
	player->Request2();
}

void ClientMain::upgrade() {
	player->Request3();
}

void ClientMain::recovery() {
	player->Request4();
}