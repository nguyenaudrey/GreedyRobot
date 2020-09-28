/*
* Student: Audrey Nguyen
* Professor: Robert Dimpsey
* Assignment #2: The Greedy Robot
* Description: This is the driver for the Greedy Robot program
*/

#include "Robot.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int startX = 0;
	int startY = 0;
	int goalX = 0;
	int goalY = 0;
	int maxDist = 0;

	if (argc != 6)
	{
		cerr << "Usage Error" << endl;
		return -1;
	}
	startX = atoi(argv[1]);
	startY = atoi(argv[2]);
	goalX = atoi(argv[3]);
	goalY = atoi(argv[4]);
	maxDist = atoi(argv[5]);

	Robot MrGreedy;
	MrGreedy.findTreasure(startX, startY, goalX, goalY, maxDist);

	return 0;
}
