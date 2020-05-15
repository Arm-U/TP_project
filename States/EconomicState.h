#pragma once

#include "State.h"
#include "MartialState.h"
#include "Context.h"

class EconomicState : public State {
public:
	void change(Context *new_context) override;

	void attack(std::shared_ptr<CompositeUnit> enemy_army, Context* new_context) override;
	void retreat(Context* new_context) override;
	void upgrade(Context* new_context) override;
	void recovery(Context* new_context) override;
};