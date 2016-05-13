/********************************
 * File: point.h
 * Author: Br. Burton
 *
 * Defines the Point class.
 ********************************/

#ifndef POINT_H
#define POINT_H

/****************************************************************
 * Class: Point
 *
 * A simple class for an x and y coordinate.
 ****************************************************************/
class Point
{
private:
   int x;
   int y;

public:
   void display() const;

   /********************
    * Constructors
    ********************/
   Point();
   Point(int x, int y);

   /********************
    * Getters
    ********************/
   int getX() const { return x; }
   int getY() const { return y; }

   /********************
    * Setters
    ********************/
   void setX(int x);
   void setY(int y);
   
};

#endif
