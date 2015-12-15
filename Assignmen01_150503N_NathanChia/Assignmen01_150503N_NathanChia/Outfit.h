/****************************************************************************/
/*!
\file Outfit.h
\author Nathan Chia
\par email: 150503N@mymail.nyp.edu.sg
\brief
Class to initialise Items
*/
/****************************************************************************/
#ifndef OUTFIT_H_
#define OUTFIT_H_
#include "Item.h"
/****************************************************************************/
/*!
Class Oufit:
\brief Defines a Outfit item, along with the SPECIAL stats it adds to the player, 
which inherits the durability stat from Item and the name string to give it a name from GameObject
*/
/****************************************************************************/
class Outfit : public Item
{
private:
	const int kSPECIAL;
public:
	Outfit(const string&, const int&, const int&);
	virtual ~Outfit();
	const int getSPECIAL();
	virtual void receiveDamage(const int &);

};


#endif