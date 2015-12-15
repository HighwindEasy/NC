#include "GameObject.h"
int GameObject::count_;
/****************************************************************************/
/*!
\brief
Adds 1 to a count everytime a item is initialised
\param rhs
const string& kName
\exception

\return

*/
/****************************************************************************/
GameObject::GameObject(const string& kName) : kName(kName)
{
	count_++;
}
/****************************************************************************/
/*!
\brief
The destructor of GameObject, also deducts 1 from the counter
\param rhs

\exception

\return

*/
/****************************************************************************/
GameObject::~GameObject()
{
	count_--;
}
/****************************************************************************/
/*!
\brief
Gives the Object initialised it's name
\param rhs

\exception

\return
 returns the Name of the Object
*/
/****************************************************************************/
string GameObject::getName(void)
{
	return kName;
}


int GameObject::getCount()
{
	return count_;
}