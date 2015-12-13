#ifndef OUTFIT_H_
#define OUTFIT_H_
#include "Item.h"
class Outfit : public Item
{
private:
	const int kSPECIAL;
public:
	Outfit(const string&, const int&, const int&);
	virtual ~Outfit();
	const int getSPECIAL();
	virtual void receiveDamage(const int &);

};


#endif