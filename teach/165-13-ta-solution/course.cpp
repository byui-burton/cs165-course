// course.cpp

#include "course.h"
#include <string>
#include <iostream>

#include <stdexcept> // std::invalid_argument

using namespace std;

Course::Course(int size)
{
   if (size < 0)
   {
      throw invalid_argument("Size cannot be negative");
   }

   this->size = size;
   classList = new Student[size];
}

Course::Course(const Course & other)
{
   // We can use our assignment operator to avoid duplicating code
   classList = NULL;
   *this = other;
}

Course& Course::operator=(const Course & other)
{
   // check for self-assignment
   if(&other == this)
   {
      return *this;
   }

   name = other.name;
   size = other.size;

   if (classList != NULL)
   {
      delete[] classList;
      classList = NULL;
   }

   classList = new Student[size];

   for (int i = 0; i < size; i++)
   {
      classList[i] = other.classList[i];
   }

   return *this;
}

Course::~Course()
{
   cout << "Cleaning up course: " << name << endl;

   if (classList != NULL)
   {  
      delete[] classList;
      classList = NULL;
   }
}

Student Course::getStudent(int index) const
{
   // We really should check for index to be in the correct range
   // here and throw an exception as well.

   return classList[index];
}

void Course::setStudent(int index, const Student & student)
{
   // We really should check for index to be in the correct range
   // here and throw an exception as well.

   classList[index] = student;
}

void Course::displayList() const
{
   cout << "Class list for course: " << name << endl;

   for (int i = 0; i < size; i++)
   {
      classList[i].display();
   }
}

