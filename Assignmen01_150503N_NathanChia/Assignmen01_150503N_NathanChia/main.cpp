#include <iostream>
using std::cout;
using std::endl;

#include "Dweller.h"
#include "Outfit.h"
#include "Weapon.h"
#include "Item.h"
#include "GameObject.h"
#include "Vec2D.h"

void testNames();
void shouldNotCompile();

int main()
{
	testNames();
	shouldNotCompile();

	Dweller d("One", 5555555);
	Outfit o("Outfit", 0, 1234567);
	Weapon w("Weapon", 10, 5);
	Vec2D c(3.4, 12);
	cout << d.getSPECIAL() << endl;
	d.assignOutfit(&o);
	d.assignWeapon(&w);
	d.setPosition(c);
	d.receiveRadDamage(15);
	d.receiveHealthDamage(60);
	d.addStimpak(1);
	d.addRadAway(1);
	d.useStimpak();
	d.useRadAway();
	cout << d.getSPECIAL() << endl;
	cout << "Vec2D position x = " << d.getPosition().x << " Vec2D position y= " << d.getPosition().y << endl;
	cout << "Weapon Damage " << d.getAttackDmg() << endl << " "<< w.getAttackDmg() << endl;
	cout << "Outfit SPECIAL" << o.getSPECIAL() << endl;
	cout << "Current Health: " << d.getCurrentHealth() << " Radiation: " << d.getCurrentRadDamage() << endl;
	return 0;
}