#pragma once

#include "State.h"
#include "EconomicState.h"
#include "../Units/CompositeUnit.h"
#include <memory>

class Context {
public:
    Context();
    
    void TransitionTo();
    void setState(std::shared_ptr<State> new_state);
    
    void Request1(std::shared_ptr<CompositeUnit> enemy_army);
    void Request2();
    void Request3();
    void Request4();

    void setArmy(std::shared_ptr<CompositeUnit> new_army);
    std::shared_ptr<CompositeUnit> getArmy() const;

private:
    std::shared_ptr<State> state_;
    std::shared_ptr<CompositeUnit> army;
};