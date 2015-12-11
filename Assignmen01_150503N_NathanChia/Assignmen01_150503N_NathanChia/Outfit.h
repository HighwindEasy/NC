#ifndef OUTFIT_H_
#define OUTFIT_H_
#include "Item.h"
class Outfit : public GameObject
{
private:
	const int kSPECIAL;
public:
	Outfit(const string&, const int&, const int&);
	~Outfit();
	const int getSPECIAL();

};


#endif