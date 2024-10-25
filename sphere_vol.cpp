#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
   double sphereVolume;
   double sphereRadius;

   cin >> sphereRadius;

   sphereRadius = 1.0;

   /* Your solution goes here  */
   // sphereVolume = ( 4.0 / 3.0 ) * M_PI * pow(sphereRadius, 3);
   sphereVolume = ( 4.0 / 3.0 ) * M_PI * ( sphereRadius * sphereRadius* sphereRadius ) ;

   cout << fixed << setprecision(2) << sphereVolume << endl;

   return 0;
}