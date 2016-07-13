/************
 * ta13.cpp
 ************/

#include "student.h"
#include "course.h"

#include <iostream>
#include <string>

using namespace std;

Course promptCourse()
{
   string courseName;
   cout << "Enter the course name: ";
   cin >> courseName;

   int size;
   cout << "How many students are in the course: ";
   cin >> size;
   
   Course course(size);
   course.setName(courseName);

   for (int i = 0; i < size; i++)
   {
      int id;
      cout << "Enter student id #" << i << ": ";
      cin >> id;

      string name;
      cout << "Enter student name #" << i << ": ";
      cin >> name;

      Student s;
      s.setId(id);
      s.setName(name);

      course.setStudent(i, s);
   }

   return course;
}

void changeAndDisplay(Course course)
{
   // Passed the course by copy on purpose!

   cout << "In change and display function...\n";

   Student burton;
   burton.setId(-1);
   burton.setName("Brother Burton");

   course.setStudent(0, burton);

   cout << "Added Brother Burton to the list. He should be here:\n";

   course.displayList();

   cout << "Leaving function.\n";
}

int main()
{
   Course course = promptCourse();

   course.displayList();
   
   changeAndDisplay(course);

   cout << "Back in function. Brother Burton should not be in the list:\n";
   course.displayList();

   Course course2 = course;
   
   Student student;
   student.setId(-2);
   student.setName("Brother Falin");
   course2.setStudent(0, student);

   cout << "Just added Brother Falin to a copy of the course.\n";
   cout << "He should be in this list:\n";
   course2.displayList();

   cout << "But not in this original list:\n";
   course.displayList();

   cout << "End of program.\n";

   return 0;
}
