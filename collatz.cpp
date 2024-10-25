#include <iostream>
// Includes the input/output stream library, which is necessary for using std::cout and std::cin for output and input operations.

int main() {
// Entry point of the program, where the execution starts.

    int current;
// Declares an integer variable 'current' which will hold the current value in the sequence.

    std::cout << "Enter the first number of the sequence: " << std::endl;
// Outputs a prompt to the user asking for the first number of the sequence.

    std::cin >> current;
// Takes user input and stores it in the variable 'current'.

    int numReachedOne = 0;
// Declares an integer variable 'numReachedOne' to keep track of how many times the number 1 is reached. This is initialized to 0.

    while ( numReachedOne <= 2 ) {
// Starts a while loop that continues running until 'numReachedOne' becomes greater than 2. This ensures the loop runs until the number 1 has been reached at least three times.

        std::cout << current << " ";
// Prints the current value of 'current', followed by a space.

        if ( current == 1 ){
// Checks if the current number is 1.

            numReachedOne = numReachedOne + 1;
// If 'current' is 1, increments the 'numReachedOne' counter by 1.

        }
        if ( current % 2 == 0 ) {
// Checks if the current number is even (divisible by 2).

             current = current / 2;
// If the current number is even, it is divided by 2.

        } else {
// If the current number is odd:

             current = 3 * current + 1;
// If 'current' is odd, the Collatz sequence formula (3 * current + 1) is applied.
        }
     }

     std::cout << "..." << std::endl;
// After exiting the loop, prints "..." to indicate the continuation of the sequence.

     return 0;
// Ends the main function, returning 0 to indicate successful execution of the program.
}
