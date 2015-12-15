#include "Weapon.h"
/****************************************************************************/
/*!
\brief
Constructor that initialises a weapon item in the game
\param rhs
const string& kName, const int& durability_, const int& kAttackDmg
\exception

\return

*/
/****************************************************************************/
Weapon::Weapon(const string& kName, const int& durability_, const int& kAttackDmg) :Item(kName,durability_), kAttackDmg(kAttackDmg) 
{

}
/****************************************************************************/
/*!
\brief
Default Destructor
\param rhs

\exception

\return

*/
/****************************************************************************/
Weapon::~Weapon()
{

}
/****************************************************************************/
/*!
\brief
Passes in the value of the attack damage of the weapon, and checks should it be a 
negative value, will be zero
\param rhs

\exception

\return

*/
/****************************************************************************/
const int Weapon::getAttackDmg()
{
	if (kAttackDmg >= 0)
	{
		const int kAttackDmg = 0;
	}
	return kAttackDmg;
}
void Weapon::receiveDamage(const int& durability_)
{
	this->durability_ = durability_/2;
}