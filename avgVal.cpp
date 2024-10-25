#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> valsVctr;     // Empty vector for values
   unsigned int i;           // Loop index
   int sumVal;               // Sum of values
   int avgVal;               // Average of values
   const int NUM_ELEMENTS = 6;

   valsVctr.push_back(30);
   valsVctr.push_back(20);
   valsVctr.push_back(20);
   valsVctr.push_back(15);
   valsVctr.push_back(5);
   valsVctr.push_back(10);

   sumVal = 0;

   for (i = 0; i < valsVctr.size(); i++) {
      sumVal += valsVctr.at(i);
   }

   avgVal = sumVal / valsVctr.size();  // Calculate average
   cout << "Average value: " << avgVal << endl;

   return 0;
}
