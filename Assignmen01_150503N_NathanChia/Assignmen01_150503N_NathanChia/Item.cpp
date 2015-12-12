#include "Item.h"
Item::Item()
{

}

Item::Item(const string& kName, const int& durability_)
{

}

Item::~Item()
{

}

void Item::receiveDamage(const int& durability_)
{
	this->durability_ = durability_;
}

const int Item::getDurability()
{
	if (durability_ >= 0)
	{
		durability_= 0;
	}
	return durability_;
}