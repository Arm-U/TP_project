#include "ClientArmy.h"

std::shared_ptr<CompositeUnit> ClientArmy::createLegion(int wNum, int aNum, int sNum) {
	std::shared_ptr<CompositeUnit> legion = std::make_shared<CompositeUnit>();
	if (legion->getCost() > points) {
		throw std::runtime_error("Not enough points");
	}
	for (int i = 0; i < wNum; ++i) {
		legion->add_unit(factory->CreateWarrior());
	}
	for (int i = 0; i < aNum; ++i) {
		legion->add_unit(factory->CreateArcher());
	}
	for (int i = 0; i < sNum; ++i) {
		legion->add_unit(factory->CreateSwordsman());
	}
	setPoints(points - legion->getCost());
	return legion;
}

void ClientArmy::setFactory(std::shared_ptr<UnitFactory> new_factory) {
	factory = new_factory;
}

int ClientArmy::getPoints() const {
	return points;
}

void ClientArmy::increasePoints(int new_points) {
	points += new_points;
}

void ClientArmy::setPoints(int new_points) {
	points = new_points;
}