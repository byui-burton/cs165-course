/***************************************************************
 * File: rational.cpp
 * Author: Br. Burton
 * Purpose: Contains the method implementations for the Rational class.
 ***************************************************************/

#include "rational.h"

#include <iostream>
using namespace std;

/*************************************************************
 * Rational :: prompt()
 *
 * prompts the users for the elements of the rational number.
 *************************************************************/
void Rational :: prompt()
{
   cout << "Top: ";
   cin >> top;

   cout << "Bottom: ";
   cin >> bottom;
}

/*************************************************************
 * Rational :: display()
 *
 * Displays a rational number in fraction form: x/y
 *************************************************************/
void Rational :: display()
{
   cout << top << "/" << bottom << endl;
}

/*************************************************************
 * Rational :: displayDecimal()
 *
 * Displays a rational number in decimal form: xx.xxxx
 *************************************************************/
void Rational :: displayDecimal()
{
   float value = (float)top / bottom;

   cout << value << endl;
}


