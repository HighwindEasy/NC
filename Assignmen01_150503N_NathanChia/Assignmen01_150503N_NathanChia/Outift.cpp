#include "Outfit.h"
Outfit::Outfit() :kSPECIAL(kSPECIAL)
{

}
Outfit::Outfit(const string& kName, const int& durability_, const int& kSPECIAL) : kSPECIAL(kSPECIAL)
{

}
Outfit::~Outfit()
{

}
const int Outfit::getSPECIAL()
{
	return kSPECIAL;
}