#include <iostream>

/* Output the Fibonacci sequence step-by-step.
   Fibonacci sequence starts as:
   0 1 1 2 3 5 8 13 21 ... in which the first
   two numbers are 0 and 1 and each additional
   number is the sum of the previous two numbers
*/

void ComputeFibonacci(int num1, int num2, int count){

    std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
    
    if(count <= 1){
    }
    else{
        ComputeFibonacci(num2, num1 + num2, count - 1);
    }
}

int main(){
    int numValues;

    std::cout << "This program outs the" << std::endl << "Fibonacci sequence step-by-step," << std::endl << "starting after the first 0 and 1." << std::endl;
    std::cout << "How many steps would you like? ";

    std::cin >> numValues;

    std::cout << "0" << std::endl << "1" << std::endl;
    ComputeFibonacci(0, 1, numValues);

    return 0;


}