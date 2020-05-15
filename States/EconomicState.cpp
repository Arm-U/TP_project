#include "EconomicState.h"

void EconomicState::change(Context* new_context) {
	new_context->setState(std::make_shared<MartialState>());
}

void EconomicState::attack(std::shared_ptr<CompositeUnit> enemy_army, Context* new_context) {
	change(new_context);
	std::cout << "You went to war\n";
}

void EconomicState::retreat(Context* new_context) {
	std::cout << "You are at home\n";
}

void EconomicState::upgrade(Context* new_context) {
	std::cout << "You can't upgrade your army\n";
}

void EconomicState::recovery(Context* new_context) {
	new_context->army->healthRecovery();
	std::cout << "You recovery your army\n";
}