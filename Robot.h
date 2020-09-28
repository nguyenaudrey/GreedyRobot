/* 
* Student: Audrey Nguyen
* Professor: Robert Dimpsey
* Assignment #2: The Greedy Robot
* Description: This is the h file for the Robot class
* A Robot object represents a robot that can be instructed to move
* to find treasure on a cartesian plane
*/

#ifndef ROBOT_H
#define ROBOT_H

#include "Position.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Robot
{
public:
	Robot();
	~Robot();

	void moveRobot(int x, int y, int maxDist, string path);
	void findTreasure(int startX, int startY, int endX, int endY, int maxDist);

private:
	int numPath;
	int N, S, W, E;
	
	// represents the position of the robot
	Position coordinates;
	// represents the position of the goal
	Position goal;
	
};

#endif 