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
returns the current value of kAttackDmg
*/
/****************************************************************************/
const int Weapon::getAttackDmg()
{
	return kAttackDmg;
}
/****************************************************************************/
/*!
\brief
Passes the value of durability into the weapon item, divided by 2 as it takes half damage
\param rhs

\exception

\return

*/
/****************************************************************************/
void Weapon::receiveDamage(const int& durability_)
{
	this->durability_ = durability_/2;
}