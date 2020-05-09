#include "MartialState.h"

void MartialState::change(Context* new_context) {
	new_context->setState(std::make_shared<EconomicState>());
}

void MartialState::attack(std::shared_ptr<CompositeUnit> enemy_army, Context* new_context) {
	if (new_context->getArmy()->getAttack() > enemy_army->getAttack())
		new_context->getArmy()->levelUp();
}

void MartialState::retreat(Context* new_context) {
	change(new_context);
}

void MartialState::upgrade(Context* new_context) {
	new_context->getArmy()->upgrade();
}

void MartialState::recovery(Context* new_context) {}

bool MartialState::isEconomic() const {
	return false;
}