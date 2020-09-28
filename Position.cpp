/*
* Student: Audrey Nguyen
* Professor: Robert Dimpsey
* Assignment #2: The Greedy Robot
* Description: This is the cpp file for the Position class
* A Position object represents a point on a cartesian plane
*/

#include "Position.h"

/*
* Default constructor for Position object
*/
Position::Position()
{
	x = 0;
	y = 0;
}

/*
* Destructor for Position object
*/
Position::~Position()
{
	x = 0;
	y = 0;
}

/*
* Getter for the x coordinate
*/
int Position::getX() const
{
	return x;
}

/*
* Getter for the y coordinate
*/
int Position::getY() const
{
	return y;
}

/*
* Setter for the x coordinate
*/
void Position::setX(int x) 
{
	this->x = x;
}

/*
* Setter for the y coordinate
*/
void Position::setY(int y)
{
	this->y = y;
}

/*
* Overloaded assignment operator for the Position object
*/
Position& Position::operator = (const Position& other) {
	this->x = other.getX();
	this->y = other.getY();
	return *this;
}