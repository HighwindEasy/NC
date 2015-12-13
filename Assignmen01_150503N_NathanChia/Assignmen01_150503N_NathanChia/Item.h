#ifndef ITEM_H_
#define ITEM_H_
#include "GameObject.h"
class Item : public GameObject
{
protected:
	int durability_;
public:
	Item(const string&, const int&);
	~Item();
	virtual void receiveDamage(const int &) = 0;
	const int getDurability();
};

#endif