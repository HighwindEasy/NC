/****************************************************************************/
/*!
\file Vec2D.h
\author Nathan Chia
\par email: 150503N@mymail.nyp.edu.sg
\brief
Struct that will define the characters Position
*/
/****************************************************************************/
#ifndef VEC2D_H
#define VEC2D_H
/****************************************************************************/
/*!
Class Vec2D:
\brief Struct that would pass in 2 double values to initialise te dweller's position within the area
*/
/****************************************************************************/
struct Vec2D
{
public:
	Vec2D();
	Vec2D(double, double);
	virtual ~Vec2D();
	double x;
	double y;
};

#endif