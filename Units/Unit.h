#pragma once
#include <memory>
#include <algorithm>
#include <vector>

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
	virtual void upgrade() {}

	virtual void add_unit(std::shared_ptr<Unit> enemy) {}
	virtual void erase_unit(std::shared_ptr<Unit> enemy) {}

	virtual void healthRecovery();
	virtual void levelUp();

	virtual std::vector<std::shared_ptr<Unit>> getSquad() const {}

protected:
	int attack;
	int max_health;
	int cur_health;
	int cost;
	int level = 0;
};