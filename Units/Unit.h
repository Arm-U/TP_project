#pragma once
#include <memory>
#include <algorithm>

class Unit {
public:
	Unit() = default;

	int getAttack() const;
	int getCurHealth() const;
	int getCost() const;
	int getLevel() const;

	void setAttack(const int& new_attack);
	void setCurHealth(const int& new_health);
	void setMaxHealth(const int& new_health);
	void setCost(const int& new_cost);

	virtual void turn(std::shared_ptr<Unit> enemy) = 0;
	virtual void upgrade(const int& cur_level) = 0;

protected:
	int attack;
	int max_health;
	int cur_health;
	int cost;
	int level = 0;
};