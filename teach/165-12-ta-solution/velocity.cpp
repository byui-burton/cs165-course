#include "velocity.h"

#include <iostream>
using namespace std;

Velocity operator+(const Velocity & lhs, const Velocity & rhs)
{
   // not a member or friend, so we need to use getters and setters

   Velocity sum;

   sum.setDx(lhs.getDx() + rhs.getDx());
   sum.setDy(lhs.getDy() + rhs.getDy());

   return sum;
}

Velocity& operator+=(Velocity & lhs, const Velocity & rhs)
{
   lhs.setDx(lhs.getDx() + rhs.getDx());
   lhs.setDy(lhs.getDy() + rhs.getDy());

   return lhs;
}

Velocity operator-(const Velocity & lhs, const Velocity & rhs)
{
   // Friend function, so we can access private data directly
   Velocity sum;

   sum.dx = lhs.dx - rhs.dx;
   sum.dy = lhs.dy - rhs.dy;

   return sum;
}

Velocity& operator-=(Velocity & lhs, const Velocity & rhs)
{
   lhs.dx -= rhs.dx;
   lhs.dy -= rhs.dy;

   return lhs;
}



void Velocity :: prompt()
{
   cout << "dx: ";
   cin >> dx;

   cout << "dy: ";
   cin >> dy;
}

void Velocity :: display() const 
{
   cout << "(dx=" << dx << ", dy=" << dy << ")";
}
