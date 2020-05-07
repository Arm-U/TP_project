#pragma once
#include <memory>
#include <algorithm>

class Unit {
public:
	Unit() = default;

	virtual int getAttack() const;
	virtual int getCurHealth() const;
	virtual int getCost() const;
	int getLevel() const;

	void setAttack(const int& new_attack);
	void setCurHealth(const int& new_health);
	void setMaxHealth(const int& new_health);
	void setCost(const int& new_cost);

	virtual void turn(std::shared_ptr<Unit> enemy) {}
	virtual void upgrade(const int& cur_level) {}

	virtual void add_unit(std::shared_ptr<Unit> enemy) {}
	virtual void remove_unit(std::shared_ptr<Unit> enemy) {}

protected:
	int attack;
	int max_health;
	int cur_health;
	int cost;
	int level = 0;
};