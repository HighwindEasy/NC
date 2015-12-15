/****************************************************************************/
/*!
\file Item.h
\author Nathan Chia
\par email: 150503N@mymail.nyp.edu.sg
\brief
Class to initialise Items
*/
/****************************************************************************/
#ifndef ITEM_H_
#define ITEM_H_
#include "GameObject.h"

/****************************************************************************/
/*!
Class Item:
\brief Defines the common stats in any item in the game, and the durability stat.
Inherits the string to add a name from GameObject
*/
/****************************************************************************/
class Item : public GameObject
{
protected:
	int durability_;
public:
	Item(const string&, const int&);
	virtual ~Item();
	virtual void receiveDamage(const int &) = 0;
	const int getDurability();
};

#endif