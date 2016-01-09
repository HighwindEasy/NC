#include "Dweller.h"
#include "Item.h"
/****************************************************************************/
/*!
\brief
Default Constructor that initialises the Dweller's stats
\param rhs

\exception

\return

*/
/****************************************************************************/
Dweller::Dweller(const string& kName, const int& SPECIAL_) : SPECIAL_(SPECIAL_), health_(100), radiation_(0),
stimpak_(0), radaway_(0), outfit_(NULL), weapon_(NULL),  GameObject(kName)
{
	Vec2D position_ = Vec2D(0, 0);
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
Dweller::~Dweller()
{

}
/****************************************************************************/
/*!
\brief
Seperates the SPECIAL values into individual intergers, along with the kSPECIAL
and add them both together, and then checks if the value exceeds 9. If the value exceeds
9 it will be set back to 9. The values are then added back together into the normal 

\param rhs

\exception

\return

*/
/****************************************************************************/
const int Dweller::getSPECIAL()
{

	if (outfit_ != 0) // Check for Outfit
	{

		//This enables the initialisation of Outfit individual stats
		outfit_->getSPECIAL();
		//Dwellers SPECIAL stats split into the 7 categories
		int strength = 0, perception = 0, endurance = 0, charisma = 0, intelligence = 0, agility = 0, luck = 0;
		int Dwellerstrength = (SPECIAL_ / 1000000);
		int Dwellerperception = (SPECIAL_ / 100000) - (Dwellerstrength * 10);
		int Dwellerendurance = (SPECIAL_ / 10000) - (Dwellerstrength * 100) - (Dwellerperception * 10);
		int Dwellercharisma = (SPECIAL_ / 1000) - (Dwellerstrength * 1000) - (Dwellerperception * 100) - (Dwellerendurance * 10);
		int Dwellerintelligence = (SPECIAL_ / 100) - (Dwellerstrength * 10000) - (Dwellerperception * 1000) - (Dwellerendurance * 100) - (Dwellercharisma * 10);
		int Dwelleragility = (SPECIAL_/10)-(Dwellerstrength * 100000) - (Dwellerperception * 10000) - (Dwellerendurance * 1000) - (Dwellercharisma * 100) - (Dwellerintelligence * 10);
		int Dwellerluck = (SPECIAL_)-(Dwellerstrength * 1000000) - (Dwellerperception * 100000) - (Dwellerendurance * 10000) - (Dwellercharisma * 1000) - (Dwellerintelligence * 100) - (Dwelleragility * 10);
		//Now for the Outfits
		int Outfitstrength = (outfit_->getSPECIAL() / 1000000);
		int Outfitperception = (outfit_->getSPECIAL() / 100000) - (Outfitstrength * 10);
		int Outfitendurance = (outfit_->getSPECIAL() / 10000) - (Outfitstrength * 100) - (Outfitperception * 10);
		int Outfitcharisma = (outfit_->getSPECIAL() / 1000) - (Outfitstrength * 1000) - (Outfitperception * 100) - (Outfitendurance * 10);
		int Outfitintelligence = (outfit_->getSPECIAL() / 100) - (Outfitstrength * 10000) - (Outfitperception * 1000) - (Outfitendurance * 100) - (Outfitcharisma * 10);
		int Outfitagility = (outfit_->getSPECIAL()/10) - (Outfitstrength * 100000) - (Outfitperception * 10000) - (Outfitendurance * 1000) - (Outfitcharisma * 100) - (Outfitintelligence * 10);
		int Outfitluck = (outfit_->getSPECIAL()) - (Outfitstrength * 1000000) - (Outfitperception * 100000) - (Outfitendurance * 10000) - (Outfitcharisma * 1000) - (Outfitintelligence * 100) - (Outfitagility * 10);
		//This adds both the Dweller ans Outfit's stats
		strength = Outfitstrength + Dwellerstrength;
		perception = Dwellerperception + Outfitperception;
		endurance = Dwellerendurance + Outfitendurance;
		charisma = Dwellercharisma + Outfitcharisma;
		intelligence = Dwellerintelligence + Outfitintelligence;
		agility = Dwelleragility + Outfitagility;
		luck = Dwellerluck + Outfitluck;
		//Checks if its above 9, and reset it back to 9 if so
		if (strength >= 9)
		{
			strength = 9;
		}
		if (perception >= 9)
		{
			perception = 9;
		}
		if (endurance >= 9)
		{
			endurance = 9;
		}
		if (charisma >= 9)
		{
			charisma = 9;
		}
		if (intelligence >= 9)
		{
			intelligence = 9;
		}
		if (agility >= 9)
		{
			agility = 9;
		}
		if (luck >= 9)
		{
			luck = 9;
		}
		//Adds back all the stats back into the 7 digit number
		SPECIAL_ = (strength * 1000000) + (perception * 100000) + (endurance * 10000) + (charisma * 1000) + (intelligence * 100) + (agility * 10) + (luck * 1);
		return SPECIAL_;
	}
	if (outfit_ == 0) // if no outift, nothing changes
	{
		return SPECIAL_;

	}
	return SPECIAL_;
}
/****************************************************************************/
/*!
\brief
passes in the health points of the Dweller
\param rhs

\exception

\return
returns the current health of the dweller
*/
/****************************************************************************/
const int Dweller::getCurrentHealth()
{
	if (health_ >= (100 - radiation_))
	{
		this->health_ = 100 - radiation_;
	}
	return health_-radiation_;
}
/****************************************************************************/
/*!
\brief
Function that passes in value of the radiation damage received by the Dweller
\param rhs

\exception

\return
returns the currrent value of radiation_
*/
/****************************************************************************/
const int Dweller::getCurrentRadDamage()
{
	return radiation_;
}
/****************************************************************************/
/*!
\brief

\param rhs

\exception

\return
returns the currrent value 0
*/
/****************************************************************************/
const int Dweller::getAttackDmg()
{
	if (weapon_ != NULL)
	{
		return weapon_->getAttackDmg();
	}
	else
	{
		return 1;
	}
}
/****************************************************************************/
/*!
\brief
Sets the current position of the player
\param rhs

\exception

\return

*/
/****************************************************************************/
void Dweller::setPosition(const Vec2D& position_)
{
	this->position_ = position_;
}
const Vec2D Dweller::getPosition()
{
	return position_;
}
/****************************************************************************/
/*!
\brief
Function that initialises the health value of the Dweller, and checks if the health 
exceed 100- radiation damages, and sets it if so
\param rhs

\exception

\return
*/
/****************************************************************************/
void Dweller::receiveHealthDamage(const int& damage_)
{
	if (health_ - damage_ - radiation_ <= 0)
	{
		health_ = 0;
	}
	else
	{
		health_ -= damage_;
	}
}/****************************************************************************/
/*!
\brief
Function that checks the current value of radiation damage received, and will 
check it does not exceed current HP
\param rhs

\exception

\return
returns the currrent value of radiation_
*/
/****************************************************************************/
void Dweller::receiveRadDamage(const int& radiation_)
{
	if (radiation_ >= 100)
	{
		this->radiation_ = 100;
	}
	if (radiation_ <= 0)
	{
		this->radiation_ = 0;
	}
	this->radiation_ = radiation_;
}
/****************************************************************************/
/*!
\brief

\param rhs

\exception

\return

*/
/****************************************************************************/
void Dweller::receiveEquipmentDamage(const int& durability_)
{

}
/****************************************************************************/
/*!
\brief
Function that adds number of stimpaks into inventory
\param rhs

\exception

\return

*/
/****************************************************************************/
void Dweller::addStimpak(const int& stimpak_)
{
	this->stimpak_ = stimpak_;
}
/****************************************************************************/
/*!
\brief
Function that adds number of radaways into inventory
\param rhs

\exception

\return

*/
/****************************************************************************/
void Dweller::addRadAway(const int& radaway_)
{
	this->radaway_ = radaway_;
}
/****************************************************************************/
/*!
\brief
Function that adds health to dweller on use of stimpak, and checks to see if the hp
 exceeds the max health
\param rhs

\exception

\return

*/
/****************************************************************************/
void Dweller::useStimpak()
{
	if (stimpak_ > 0)
	{
		health_ += 20;
		stimpak_ -= 1;
		if (health_ >= 100 - radiation_)
		{
			health_ = 100 - radiation_;
		}
	}
}
/****************************************************************************/
/*!
\brief
Function that recudes radiation damage
\param rhs

\exception

\return

*/
/****************************************************************************/
void Dweller::useRadAway()
{
	if (radaway_ > 0)
	{
		radiation_ -= 10;
		health_ -= 10;
		radaway_ -= 1;
		if (radiation_ <= 0)
		{
			radiation_ = 0;
		}
	}
}
/****************************************************************************/
/*!
\brief
Function that assigns outfits to dweller
\param rhs

\exception

\return

*/
/****************************************************************************/
Outfit* Dweller::assignOutfit(Outfit* outfit_)
{
	this->outfit_ = outfit_;
	return outfit_;
}
/****************************************************************************/
/*!
\brief
Function that assigns weapons to the Dweller
\param rhs

\exception

\return

*/
/****************************************************************************/
Weapon* Dweller::assignWeapon(Weapon* weapon_)
{
	this->weapon_ = weapon_;
	return weapon_;
}/****************************************************************************/
/*!
\brief
Function that checks if the Dweller is Dead by checking if the health is below or equal to zero
\param rhs

\exception

\return
returns the bool isdead value
*/
/****************************************************************************/
bool Dweller::isDead()
{
	bool isDead;
	if (health_ <= 0)
	{
		isDead = true;
	}
	else
	{
		isDead = false;
	}
	return isDead;
}
