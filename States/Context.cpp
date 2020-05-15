#include "Context.h"

Context::Context(){
    state_ = std::make_shared<EconomicState>();
}

void Context::TransitionTo() {
    state_->change(this);
}

void Context::setState(std::shared_ptr<State> new_state) {
    state_ = new_state;
}

void Context::Request1(std::shared_ptr<CompositeUnit> enemy_army) {
    state_->attack(enemy_army, this);
}

void Context::Request2() {
    state_->retreat(this);
}

void Context::Request3() {
    state_->upgrade(this);
}

void Context::Request4() {
    state_->recovery(this);
}