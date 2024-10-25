#include <iostream>
using namespace std;

void ConvHrMin(int timeVal, int& hrVal, int& minVal) {
   hrVal = timeVal / 60;
   minVal = timeVal % 60;
}

int main() {
   int totTime;
   int usrHr;
   int usrMin;

   totTime = 0;
   usrHr = 0;
   usrMin = 0;

   cout << "Enter total minutes: ";
   cin >> totTime;
 
   ConvHrMin(totTime, usrHr, usrMin);
 
   cout << "Equals: ";
   cout << usrHr << " hrs ";
   cout << usrMin << " min" << endl;

   return 0;
}

Using multiple pass by reference parameters makes 
sense when the output values are intertwined, 
such as computing monetary change, 
whose function might be 
void ComputeChange(int totCents, int& numQuarters, 
int& numDimes, int& numNickels, int& numPennies), 
or converting from polar to Cartesian coordinates, 
whose function might be 
void PolarToCartesian(int radialPol, int anglePol, int& xCar, int& yCar).