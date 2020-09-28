/*
* Student: Audrey Nguyen
* Professor: Robert Dimpsey
* Assignment #2: The Greedy Robot
* Description: This is the cpp file for the Robot class
* A Robot object represents a robot that can be instructed to move
* to find treasure on a cartesian plane
*/

#include "Robot.h"
using namespace std;

/*
* Default constructor of the robot
*/

Robot::Robot() 
{
	coordinates = Position();
	goal = Position();
	numPath = 0;
	N = 0;
	S = 0;
	W = 0;
	E = 0;
}

/*
* Destructor of the robot
*/
Robot::~Robot() 
{
	coordinates.setX(0);
	coordinates.setY(0);
	goal.setX(0);
	goal.setY(0);
	numPath = 0;
	N = 0;
	S = 0;
	W = 0;
	E = 0;
}

/* 
* Function that moves the robot North, South, East, or West
* Takes in two integers representing the current position of the robot
* Takes in another integer representing the max distance the robot can travel the same direction in a row
* Adds characters representing directions to a string representing a path 
* Prints the path out when it reaches the treasure
*/
void Robot::moveRobot(int x, int y, int maxDist, string path)
{
	// Base case: When the robot has reached the destination
	//&& (path.length() == shortestPossibleDistance)
	if ((x == goal.getX()) && (y == goal.getY()) )
	{
		cout << path << endl;
		numPath++;
		return;
	}

	// Determines if going North
	if ((y < goal.getY()) && (N < maxDist))
	{
		E = 0;
		S = 0;
		W = 0;
		N++;
		moveRobot(x, y+1, maxDist, path + "N");
	}

	// Determines if going South
	if ((y > goal.getY()) && (S < maxDist))
	{
		N = 0;
		E = 0;
		W = 0;
		S++;
		moveRobot(x, y-1, maxDist, path + "S");
	}

	// Determines if going West
	if ((x > goal.getX()) && (W < maxDist))
	{
		N = 0;
		S = 0;
		E = 0;
		W++;
		moveRobot(x-1, y, maxDist, path + "W");
	}

	// Determines if going East
	if ((x < goal.getX()) && (E < maxDist))
	{
		N = 0;
		S = 0;
		W = 0;
		E++;
		moveRobot(x+1, y, maxDist, path + "E");
	}

}

/* 
* This function prepares the robot to find the treasure
* Takes in integers sX and sY to represent the starting coordinates
* Takes in integers gX and gY to represent the goal's coordinates
* Takes in an integer to represent the max distance a robot can travel in one direction
* It prints out the number of unique paths found
*/
void Robot::findTreasure(int sX, int sY, int gX, int gY, int maxDist)
{
	// Setting the coordinates
	coordinates.setX(sX);
	coordinates.setY(sY);
	goal.setX(gX);
	goal.setY(gY);

	// Setting the integers to all be zero because the robot hasn't traveled yet
	N = 0;
	S = 0;
	W = 0;
	E = 0;
	numPath = 0;

	// Creating the path's string
	// This represents the path of the robot
	string path = "";

	//Checks if Robot has already found the treasure 
	if (abs(sX - gX) + abs(sY - gY) == 0) 
	{
		numPath = 0;
	}

	// Calls on recursive function moveRobot to find the paths to the treasure
	else 
	{ 
		moveRobot(coordinates.getX(), coordinates.getY(), maxDist, path);
	}

	// Prints out the number of paths found
	cout << "Number of paths: " << numPath << endl;

}



