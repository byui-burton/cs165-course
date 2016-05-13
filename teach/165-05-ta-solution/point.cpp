/********************************
 * File: point.cpp
 * Author: Br. Burton
 *
 * The methods of the point class.
 ********************************/

#include "point.h"

#include <iostream>
using namespace std;

/******************************************
 * Function: display
 * Purpose: Displays the point
 ******************************************/
void Point :: display() const
{
   // Note: We could just use x and y here and not the getters
   // because it's a member function. But this will force you
   // to deal with const :-)...
   cout << "(" << getX() << ", " << getY() << ")";
}

Point :: Point()
{
   x = 5;
   y = 5;
}

Point :: Point(int x, int y)
{
   setX(x);
   setY(y);
}

void Point :: setX(int x)
{
  if (x < 1)
  {
     x = 1;
  }
  else if (x > 10)
  {
     x = 10;
  }

  this->x = x;
}

void Point :: setY(int y)
{
  if (y < 1)
  {
     y = 1;
  }
  else if (y > 10)
  {
     y = 10;
  }

  this->y = y;
}



