#ifndef WEAPON_H_
#define WEAPON_H_
#include "Item.h"
class Weapon :public Item
{
private:
	const int kAttackDmg;
public:
	Weapon(const string&, const int&, const int&);
	~Weapon();
	const int getAttackDmg();
	virtual void receiveDamage(const int &);
};

#endif