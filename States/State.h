#pragma once

#include "../Units/CompositeUnit.h"
#include <memory>

class Context;

class EconomicState;
class MartialState;

class State {
public:
	virtual void change(Context *new_context) = 0;

	virtual void attack(std::shared_ptr<CompositeUnit> enemy_army, Context* new_context) = 0;
	virtual void retreat(Context* new_context) = 0;
	virtual void upgrade(Context* new_context) = 0;
	virtual void recovery(Context* new_context) = 0;

	virtual bool isEconomic() const;
};