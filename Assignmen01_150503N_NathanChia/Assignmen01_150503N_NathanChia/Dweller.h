#ifndef DWELLER_H_
#define DWELLER_H_
#include "Outfit.h"
#include "Weapon.h"
#include "Vec2D.h"
class Dweller : public Outfit, public Weapon
{
private:
	Vec2D position_;
	int SPECIAL_;
	int health_;
	int radiation_;
	int stimpack_;
	int radaway_;
	Outfit* outfit_;
	Weapon* weapon_;
protected:
public:
	Dweller();
	Dweller(const string&, const int&);
	~Dweller();
	const int getSPECIAL();
	const int getCurrentHealth();
	const int getCurrentRadDamage();
	const int getAttackDmg();
	void setPosition(const Vec2D&);
	const Vec2D getPosition();
	void receiveHealthDamage(const int&);
	void receiveRadDamage(const int&);
	void receiveEquipmentDamage(const int&);
	void addStimpak(const int&);
	void addRadAway(const int&);
	void useStimpak();
	void useRadAway();
	Outfit* assignOutfit(Outfit*);
	Weapon* assignWeapon(Weapon*);
	bool isDead();

};

#endif