/****************************************************************************/
/*!
\file Weapon.h
\author Nathan Chia
\par email: 150503N@mymail.nyp.edu.sg
\brief
Class to initialise a weapon Item
*/
/****************************************************************************/
#ifndef WEAPON_H_
#define WEAPON_H_
#include "Item.h"

/****************************************************************************/
/*!
Class Weapon:
\brief Defines a weapon item, along with the damage it would deal
*/
/****************************************************************************/
class Weapon :public Item
{
private:
	const int kAttackDmg;
public:
	Weapon(const string&, const int&, const int&);
	virtual ~Weapon();
	const int getAttackDmg();
	virtual void receiveDamage(const int &);
};

#endif