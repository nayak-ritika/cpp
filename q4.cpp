//Write a program which computes the greatest common divisor (GCD) among two user-entered integers numA and numB, 
//using Euclid's algorithm: If numA > numB, set numA to numA - numB, else set numB to numB - numA.
// These steps are repeated until numA equals numB, at which point numA and numB each equal the GCD.

// Input two numbers from user, then compute the GCD using Euclid's algorithm as described above. Output the GCD of the numbers.

#include <iostream>

int main(){
    int numA;
    int numB;
    int gcd;
    std::cin >> numA >> numB;
    while (numA != numB){
        if (numA > numB){
            numA = numA - numB;
        }
        else{
            numB = numB - numA;
        }
    }
    gcd = numA;
    std::cout << gcd << std::endl;
    
    return 0;
}