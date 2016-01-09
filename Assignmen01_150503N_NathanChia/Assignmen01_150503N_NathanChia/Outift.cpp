#include "Outfit.h"
/****************************************************************************/
/*!
\brief
Constructor that initialises a outfit item
\param rhs
const string& kName, const int& durability_, const int& kSPECIAL
\exception

\return
*/
/****************************************************************************/
Outfit::Outfit(const string& kName, const int& durability_, const int& kSPECIAL) 
	:Item(kName,durability_), kSPECIAL(kSPECIAL)
{

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
Outfit::~Outfit()
{

}
/****************************************************************************/
/*!
\brief
Passes in the SPECIAL value of the outfit into functions that require it
\param rhs

\exception

\return
returns the SPECIAL value of the Oufit
*/
/****************************************************************************/
const int Outfit::getSPECIAL()
{

	return kSPECIAL;
}
/****************************************************************************/
/*!
\brief
Initialises the durability of the Outfit
\param rhs

\exception

\return

*/
/****************************************************************************/
void Outfit::receiveDamage(const int & durability_)
{
	this->durability_ = durability_;
}