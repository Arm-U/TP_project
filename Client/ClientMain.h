#include <iostream>
#include "../Factories/EnglandUnitFactory.h"
#include "../Factories/FranceUnitFactory.h"
#include "ClientArmy.h"
#include "../States/MartialState.h"
#include "../States/EconomicState.h"

class ClientMain {
public:
	ClientMain(int n);
	~ClientMain() = default;

	void add(int war, int arch, int swman);
	void attack();
	void retreat();
	void upgrade();
	void recovery();

private:
	std::shared_ptr<UnitFactory> factory;
	std::shared_ptr<ClientArmy> client;
	std::shared_ptr<CompositeUnit> army;
	std::shared_ptr<CompositeUnit> enemy;
	std::shared_ptr<Context> player;
};