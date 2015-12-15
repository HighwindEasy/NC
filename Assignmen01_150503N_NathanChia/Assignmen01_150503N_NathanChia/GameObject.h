/****************************************************************************/
/*!
\file GameObject.h
\author Nathan Chia
\par email: 150503N@mymail.nyp.edu.sg
\brief
Class to define any object within the game
*/
/****************************************************************************/
#ifndef GAMEOBJECT_H_
#define GAMEOBJECT_H_
#include <string>
using std::string;

/****************************************************************************/
/*!
Class GameObject:
\brief Defines standard values for any object in the game such as Item name and an item count
*/
/****************************************************************************/
class GameObject
{
private:
	const string kName;
	static int count_;
protected:
	GameObject(const string&);
public:
	virtual ~GameObject();
	string getName(void);
	static int getCount();

};

#endif