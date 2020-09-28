/*
* Student: Audrey Nguyen
* Professor: Robert Dimpsey
* Assignment #2: The Greedy Robot
* Description: This is the h file for the Position class
* A Position object represents a point on a cartesian plane
*/

#ifndef POSITION_H
#define POSITION_H

class Position
{
public:

	Position();
	~Position();

	int getX() const;
	int getY() const;
	void setX(int x);
	void setY(int y);

	Position& operator = (const Position&);

private:
	int x;
	int y;
};

#endif

