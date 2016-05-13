/********************************
 * File: robot.cpp
 * Author: Br. Burton
 *
 * The methods of the Robot class.
 ********************************/

#include "robot.h"
#include <iostream>
using namespace std;

/************************************
 * Function: Display
 * Purpose: Displays the robot.
 ************************************/
void Robot :: display() const
{
   position.display(); // use our display function from Point

   cout << " - Energy: " << getEnergy();
}

/********************
* Constructors
********************/
Robot :: Robot()
{
  energy = 100;
}

Robot :: Robot(int energy)
{
  setEnergy(energy);
}

Robot :: Robot(Point p, int energy)
{
  setPosition(p);
  setEnergy(energy);
}

/********************
* Setters
********************/
void Robot :: setPosition(Point position)
{
  this->position = position;
}

void Robot :: setEnergy(int energy)
{
  if (energy < 0)
  {
     this->energy = 0;
  }
  else
  {
     this->energy = energy;
  }
}

