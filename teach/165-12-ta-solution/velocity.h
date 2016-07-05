#ifndef VELOCITY_H
#define VELOCITY_H

class Velocity
{
private:
   float dx;
   float dy;

public:
   /**************************
    * Getters and Setters
    **************************/
   float getDx() const { return dx; }
   float getDy() const { return dy; }

   void setDx(float dx) { this->dx = dx; }
   void setDy(float dy) { this->dy = dy; }

   /**************************
    * Public member functions
    **************************/
   void prompt();
   void display() const;

   /*****************************
    * Non-Member Friend Operators
    *****************************/
   // Note that the declaration for these functions goes inside the class
   // but they are NOT actually member functions.
   friend Velocity operator-(const Velocity & lhs, const Velocity & rhs);
   friend Velocity& operator-=(Velocity & lhs, const Velocity & rhs);
};

/************************
 * Non-Member Operators
 ************************/
// Note that we put these in the .h for the class, even though they are
// not member functions, because they belong with the library for the class.
Velocity operator+(const Velocity & lhs, const Velocity & rhs);
Velocity& operator+=(Velocity & lhs, const Velocity & rhs);

#endif
