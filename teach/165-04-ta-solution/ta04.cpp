/***************************************************************
 * File: ta04.cpp
 * Author: Br. Burton
 * Purpose: Contains the main function to test the Rational class.
 ***************************************************************/

#include <iostream>
#include <string>
using namespace std;

#include "rational.h"

int main()
{
   // Declare your Rational object here
   Rational fraction;   

   // Call your prompt function here
   fraction.prompt();

   // Call your display functions here
   fraction.display();
   fraction.displayDecimal();

   return 0;
}
