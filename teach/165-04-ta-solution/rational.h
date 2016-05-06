/***************************************************************
 * File: rational.h
 * Author: Br. Burton
 * Purpose: Contains the definition of the Rational class
 ***************************************************************/
#ifndef RATIONAL_H
#define RATIONAL_H

/*************************************
 * Rational Class
 *
 * Stores a rational number (fraction)
 *************************************/
class Rational
{
private:
   int top;
   int bottom;

public:
   void prompt();
   void display();
   void displayDecimal();

};


#endif
