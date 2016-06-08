/*********************************************
 * File: circle.cpp
 * Author: Br. Burton
 *
 * Contains the methods for the circle class.
 **********************************************/

#include "circle.h"

#include <iostream>
using namespace std;

void Circle :: promptForCircle()
{
   // Use the point's prompt method for x & y
   promptForPoint();

   cout << "Enter radius: ";
   cin >> radius;

   // TODO: we should likely do some error checking on the value here...
}

void Circle :: display() const
{
   // Because the point display method has the same name we need to
   // use the scope resolution operator (Point::...) to specify that
   // we want the point one here.
   Point::display();

   cout << " - Radius: " << radius;
}


