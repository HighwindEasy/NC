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
	int strength = (SPECIAL_ / 1000000);
	int perception = (SPECIAL_ / 100000) - (strength * 10);
	int endurance = (SPECIAL_ / 10000) - (strength * 100) - (perception * 10);
	int charisma = (SPECIAL_ / 1000) - (strength * 1000) - (perception * 100) - (endurance * 10);
	int intelligence = (SPECIAL_ / 100) - (strength * 10000) - (perception * 1000) - (endurance * 100) - (charisma * 10);
	int agility = (SPECIAL_)-(strength * 100000) - (perception * 10000) - (endurance * 1000) - (charisma * 100) - (intelligence * 10);
	int luck = (SPECIAL_)-(strength * 100000) - (perception * 100000) - (endurance * 10000) - (charisma * 1000) - (intelligence * 100) - (agility * 10);
	if (outfit_ = 0)
	{
		return SPECIAL_;

	}
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
