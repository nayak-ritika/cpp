#include <iostream>

/* Determine the greatest common divisor
   of two numbers, e.g. GCD(8, 12) = 4
*/

int GCDCalculator(int n1, int n2){
    int gcdVal;
    
    if(n1 == n2){            //base case: numbers are equal
        gcdVal = n1;
    }
    else{               //recursive case: subtract smaller from larger
        if(n1 > n2){
            gcdVal = GCDCalculator(n1 - n2, n2);
        }
        else{
            gcdVal = GCDCalculator(n1, n2 - n1);
        }
    }
    return gcdVal;
}

int main(){
    int gcdInput1;
    int gcdInput2;
    int gcdOutput;

    std::cout << "Program outputs the greatest " << std::endl << "common divisor of two numbers." << std::endl;
    std::cout << "Enter two numbers:  ";

    std::cin >> gcdInput1 >> gcdInput2;

    if((gcdInput1 < 1) || (gcdInput2 < 1)){
        std::cout << "Note: Neither value can be below 1." << std::endl;
    }
    else{
        gcdOutput = GCDCalculator(gcdInput1, gcdInput2);
        std::cout << "Greatest common divisor = " << gcdOutput << std::endl;
    }

    return 0;
}