/*#include <iostream>
using namespace std;

void GuessNumber(int lowVal, int highVal) {
   int midVal;            // Midpoint of low and high value
   char userAnswer;       // User response
   
   midVal = (highVal + lowVal) / 2;
   
   // Prompt user for input
   cout << "Is it " << midVal << "? (l/h/y): ";
   cin >> userAnswer;
   
   if( (userAnswer != 'l') && (userAnswer != 'h') ) { // Base case: found number
      cout << "Thank you!" << endl;                   
   }
   else {                                             // Recursive case: split into lower OR upper half
      if (userAnswer == 'l') {                        // Guess in lower half
         GuessNumber(lowVal, midVal);                 // Recursive call
      }
      else {                                          // Guess in upper half
         GuessNumber(midVal + 1, highVal);            // Recursive call
      }
   }
}

int main() {
   // Print game objective, user input commands
   cout << "Choose a number from 0 to 50." << endl;
   cout << "Answer with:" << endl;
   cout << "   l (your num is lower)" << endl;
   cout << "   h (your num is higher)" << endl;
   cout << "   any other key (guess is right)." << endl;
   
   // Call recursive function to guess number
   GuessNumber(0, 50);
   
   return 0;
}
*/


/*#include <iostream>
using namespace std;

void FindNumber(int number, int lowVal, int highVal) {
   int midVal;

   midVal = (highVal + lowVal) / 2;
   cout << number;
   cout << " ";
   cout << midVal;

   if (number == midVal) {
      cout << " a" << endl;
   }
   else {
      if (number < midVal) {
         cout << " b" << endl;
         FindNumber(number, lowVal, midVal);
      }
      else {
         cout << " c" << endl;
         FindNumber(number, midVal + 1, highVal);
      }
   }
}

int main() {
   int number;

   cin >> number;
   FindNumber(number, 0, 8);
   return 0;
}*/

/*
#include <iostream>
using namespace std;

void FindNumber(int number, int lowVal, int highVal) {
   int midVal;

   midVal = (highVal + lowVal) / 2;
   cout << number;
   cout << " ";
   cout << midVal;

   if (number == midVal) {
      cout << " u" << endl;
   }
   else {
      if (number < midVal) {
         cout << " v" << endl;
         FindNumber(number, lowVal, midVal);
      }
      else {
         cout << " w" << endl;
         FindNumber(number, midVal + 1, highVal);
      }
   }
}

int main() {
   int number;

   cin >> number;
   FindNumber(number, 0, 16);
   
   return 0;

} */

/*
#include <iostream>
using namespace std;

void FindNumber(int number, int lowVal, int highVal) {
   int midVal;

   midVal = (highVal + lowVal) / 2;
   cout << number;
   cout << " ";
   cout << midVal;

   if (number == midVal) {
      cout << " o" << endl;
   }
   else {
      if (number < midVal) {
         cout << " p" << endl;
         FindNumber(number, lowVal, midVal);
      }
      else {
         cout << " q" << endl;
         FindNumber(number, midVal + 1, highVal);
      }
   }
}

int main() {
   int number;

   cin >> number;
   FindNumber(number, 0, 14);
   
   return 0;
}
*/

/*
#include <iostream>
using namespace std;

void FindNumber(int number, int lowVal, int highVal) {
   int midVal;

   midVal = (highVal + lowVal) / 2;
   cout << number;
   cout << " ";
   cout << midVal;

   if (number == midVal) {
      cout << " t" << endl;
   }
   else {
      if (number < midVal) {
         cout << " u" << endl;
         FindNumber(number, lowVal, midVal);
      }
      else {
         cout << " v" << endl;
         FindNumber(number, midVal + 1, highVal);
      }
   }
}

int main() {
   int number;

   cin >> number;
   FindNumber(number, 0, 14);
   
   return 0;
}

*/

#include <iostream>
using namespace std;

void FindNumber(int number, int lowVal, int highVal) {
   int midVal;

   midVal = (highVal + lowVal) / 2;
   cout << number;
   cout << " ";
   cout << midVal;

   if (number == midVal) {
      cout << " e" << endl;
   }
   else {
      if (number < midVal) {
         cout << " f" << endl;
         FindNumber(number, lowVal, midVal);
      }
      else {
         cout << " g" << endl;
         FindNumber(number, midVal + 1, highVal);
      }
   }
}

int main() {
   int number;

   cin >> number;
   FindNumber(number, 0, 8);
   
   return 0;
}