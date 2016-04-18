/**********************************************************
 * Team Activity 02
 * Author: Br. Burton
 *
 * After working with your team on this assignment,
 * please compare your solution to this one and note any
 * insights.
 ***********************************************************/

#include <iostream>
#include <string>
using namespace std;


/**************************************************
 * Struct: Scripture
 * Description: Holds the elements of a scripture.
 **************************************************/
struct Scripture
{
   string book;
   int chapter;
   int verse;
};

/*****************************************************
 * Function: promptScripture
 * Description: Prompts the user for the parts of a scripture.
 ******************************************************/
void promptScripture(Scripture & scripture)
{
   cout << "Book: ";
   cin >> scripture.book;

   cout << "Chapter: ";
   cin >> scripture.chapter;

   cout << "Verse: ";
   cin >> scripture.verse;
}

/*****************************************************
 * Function: displayScripture
 * Description: Displays a scripture on the screen.
 ******************************************************/
void displayScripture(const Scripture & scripture)
{
   cout << scripture.book << " ";
   cout << scripture.chapter << ":" << scripture.verse;
   cout << endl;
}

/*****************************************************
 * Function: main
 * Description: Calls functions to create and display
 *  scriptures.
 ******************************************************/
int main()
{
   Scripture myScripture;

   // Prompt for it
   promptScripture(myScripture);

   // Display it
   displayScripture(myScripture);

   return 0;
}
