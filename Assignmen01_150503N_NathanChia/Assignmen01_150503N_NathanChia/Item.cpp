#include "Item.h"
/****************************************************************************/
/*!
\brief
Constructor that initialises a item within the game
\param rhs
const string& kName, const int& durability_
\exception

\return

*/
/****************************************************************************/
Item::Item(const string& kName, const int& durability_) : GameObject(kName), durability_(durability_)
{

}
/****************************************************************************/
/*!
\brief
Destructor for item
\param rhs
\exception

\return

*/
/****************************************************************************/
Item::~Item()
{

}
/****************************************************************************/
/*!
\brief
Function that checks for item if it broke in the game or not
\param rhs

\exception

\return
current number of durability_
*/
/****************************************************************************/
const int Item::getDurability()
{
	if (durability_ >= 0)
	{
		durability_= 0;
	}
	return durability_;
}