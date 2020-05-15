#include "MartialState.h"

void MartialState::change(Context* new_context) {
	new_context->setState(std::make_shared<EconomicState>());
}

void MartialState::attack(std::shared_ptr<CompositeUnit> enemy_army, Context* new_context) {
	if (new_context->army->getAttack() > enemy_army->getAttack())
		new_context->army->levelUp();
	std::cout << "You attacked enemy\n";
}

void MartialState::retreat(Context* new_context) {
	change(new_context);
	std::cout << "You retreated\n";
}

void MartialState::upgrade(Context* new_context) {
	new_context->army->upgrade();
	std::cout << "You upgraded your army\n";
}

void MartialState::recovery(Context* new_context) {
	std::cout << "You can't recovery your army\n";
}

bool MartialState::isEconomic() const {
	return false;
}