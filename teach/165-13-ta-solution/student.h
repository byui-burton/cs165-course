// student.h

#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student
{
private:
   int id;
   std::string name;

public:
   int getId() const { return id; }
   void setId(int id) { this->id = id; }

   std::string getName() const { return name; }
   void setName(std::string name) { this->name = name; }

   void display() const;
};

#endif
