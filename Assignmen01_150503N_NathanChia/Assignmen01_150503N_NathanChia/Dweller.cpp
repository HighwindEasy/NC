#include "Dweller.h"
Dweller::Dweller()
{

}
Dweller::Dweller(const string& kName, const int& SPECIAL_)
{

}
Dweller::~Dweller()
{

}
const int Dweller::getSPECIAL()
{
	return SPECIAL_;
}
const int Dweller::getCurrentHealth()
{
	return health_;
}
const int Dweller::getCurrentRadDamage()
{
	return radiation_;
}
const int Dweller::getAttackDmg()
{
	return 0;
}
void Dweller::setPosition(const Vec2D& position_)
{
	this->position_ = Vec2D(0,0);
	this->position_ = position_;
}
void Dweller::receiveHealthDamage(const int& health_)
{
	this->health_ = health_;
}
void Dweller::receiveRadDamage(const int& radiation_)
{
	this->radiation_ = radiation_;
}
void Dweller::receiveEquipmentDamage(const int& durability_)
{
	this->durability_ = durability_;
}
void Dweller::useStimpak()
{

}
void Dweller::useRadAway()
{

}
Dweller::Outfit* assignOutfit(Outfit* outfit_)
{

}
Dweller::Weapon* assignWeapon(Weapon* weapon_)
{

}
bool Dweller::isDead()
{

}
