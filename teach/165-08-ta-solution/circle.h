/******************************
 * File: circle.h
 * Author: Br. Burton
 *
 * Defines a circle class.
 ******************************/

#ifndef CIRCLE_H
#define CIRCLE_H

#include "point.h"

/******************************************************
 * Class: Circle
 *
 * This class defines a circle that contains an x and y
 * coordinate for a center and a radius value.
 *******************************************************/
class Circle : public Point
{
private:
   float radius;

public:
   /********************
    * Getters / Setters 
    ********************/
   float getRadius() const { return radius; }
   void setRadius(float radius) { this->radius = radius; }

   /************************************************************
    * Circle :: promptForCircle
    *
    * Promps the user for the X and Y coordinates of the center
    * as well as the radius and sets them.
    *************************************************************/
   void promptForCircle();

   /*************************************************************
    * Circle :: display
    *
    * Outputs the circle's properties to the screen.
    *************************************************************/
   void display() const;

};

#endif // CIRCLE_H
