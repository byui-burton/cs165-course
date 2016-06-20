/****************************************************
 * Team Activity 10 Solution
 * Author: Br. Burton
 *
 * Description: This team activity demonstrates the basics
 * of using vectors.
 ****************************************************/

#include <iostream>
#include <vector>
using namespace std;

/****************************************************
 * Function: promptNumbers
 * Description: Prompts the user for numbers and appends
 *   them to the end of the vector.
 ****************************************************/
void promptNumbers(vector<int> & numbers)
{
   int num;

   do
   {
      cout << "Enter a number (0 to quit): ";
      cin >> num;

      if (num != 0)
      {
         // We don't want to add 0 to the vector
         // Sometimes students do this and then just stop iterating
         // when they get to a 0, similar to a null character in a
         // c-string. But this requires this knowledge everywhere your
         // vector is used. It is much better to only put the valid numbers
         // in the vector.
      
         numbers.push_back(num);
      }
   }
   while (num != 0);
}

/**********************************************************
 * Function: displayNumbers
 * Description: Displays each number in the vector.
 **********************************************************/
void displayNumbers(vector<int> & numbers)
{
   cout << "\nThe contents of the vector are:\n";

   for (vector<int>::iterator it = numbers.begin(); it != numbers.end(); it++)
   {
      cout << *it << endl;
   }
}

/**********************************************************
 * Function: removeOdds
 * Description: Removes all odd numbers from the vector.
 **********************************************************/
void removeOdds(vector<int> & numbers)
{
   cout << "\nRemoving odd numbers...\n";

   vector<int>::iterator it = numbers.begin();
   
   while (it != numbers.end())
   {
      if (*it % 2 != 0)
      {
         // The number is not divisible by 2, so remove it
         it = numbers.erase(it);

         // This will automatically advance the iterator to the next spot,
         // so if this were in a for loop with "it++" at the end, we would
         // be in trouble.
      }
      else
      {
         // Nothing was erased, in this case, advance the iterator
         it++;
      }
   }
}

/**********************************************************
 * Function: main
 * Description: Calls the functions to prompt and display
 *  the vector of numbers.
 **********************************************************/
int main()
{
   vector<int> numbers;

   // First get the numbers from the user
   promptNumbers(numbers);

   // Display the contents of the list
   displayNumbers(numbers);

   // Remove any odd numbers
   removeOdds(numbers);

   // Display the cotents again
   displayNumbers(numbers);

   return 0;
}
