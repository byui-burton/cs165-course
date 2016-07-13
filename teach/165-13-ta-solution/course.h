// course.h

#ifndef COURSE_H
#define COURSE_H

#include "student.h"
#include <string>

class Course
{
private:
   std::string name;
   int size;
   Student* classList;

public:
   // Constructor and Destructor
   Course(int size);
   ~Course();

   // Copy Constructor and Assignment Operator
   Course(const Course & other);
   Course& operator=(const Course & other);

   std::string getName() const { return name; }
   void setName(std::string name) { this->name = name; }
   
   int getSize() const { return size; }
   void setSize(int size) { this->size = size; }

   Student getStudent(int index) const;
   void setStudent(int index, const Student &);

   void displayList() const;

};

#endif
