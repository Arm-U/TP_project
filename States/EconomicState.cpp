#include "EconomicState.h"

void EconomicState::change(Context* new_context) {
	new_context->setState(std::make_shared<MartialState>());
}

void EconomicState::attack(std::shared_ptr<CompositeUnit> enemy_army, Context* new_context) {
	change(new_context);
}

void EconomicState::retreat(Context* new_context) {}

void EconomicState::upgrade(Context* new_context) {}

void EconomicState::recovery(Context* new_context) {
	new_context->getArmy()->healthRecovery();
}