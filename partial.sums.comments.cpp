#include <iostream>  // For standard input/output streams
#include <vector>    // To use the std::vector container

// Function that computes partial sums of elements in the input vector
std::vector<int> partialSums(const std::vector<int>& inputVector) {
    std::vector<int> result(inputVector.size());  // Initialize result vector of same size as input
    switch (inputVector.size()) {
        case 0:  // If input vector is empty, do nothing
            break;
        case 1:  // If there is only one element, partial sum is the element itself
            result.at(0) = inputVector.at(0);
            break;
        default:
            result.at(0) = inputVector.at(0);  // Set the first element of result to first element of input
            for (int i = 1; i < inputVector.size(); i++) {
                // Compute cumulative sum: each element is the sum of all previous elements and the current one
                result.at(i) = result.at(i-1) + inputVector.at(i);
            }
            break;
    }
    return result;  // Return the vector of partial sums
}

// Function to print the elements of a vector, separated by commas
void printVector(const std::vector<int>& vector) {
    for (int i = 0; i < vector.size(); i++) {
        std::cout << vector.at(i);  // Print each element
        if (i < vector.size() - 1) std::cout << ", ";  // Add comma between elements, except after the last one
    }
    std::cout << std::endl;  // Print newline after printing the vector
}

// Function to find the second smallest element in a vector, or return 42 if it doesn't exist
int secondSmallestOrElse42(const std::vector<int>& numbers) {
    if (numbers.size() < 2) return 42;  // If fewer than 2 elements, return 42
    int smallest = numbers.at(0);  // Initialize smallest as the first element
    for (int i = 1; i < numbers.size(); i++) {
        // Find the smallest element in the vector
        if (numbers.at(i) < smallest) {
            smallest = numbers.at(i);
        }
    }
    
    int secondSmallest = 42;  // Initialize second smallest as 42
    bool hasSecondSmallest = false;  // Flag to indicate if we found a valid second smallest
    for (int i = 0; i < numbers.size(); i++) {
        // Look for the second smallest element
        if (numbers.at(i) > smallest) {
            if (hasSecondSmallest) {
                // If second smallest already found, check if current is smaller
                if (numbers.at(i) < secondSmallest) {
                    secondSmallest = numbers.at(i);
                }
            } else {
                // Set the first valid larger number as the second smallest
                secondSmallest = numbers.at(i);
                hasSecondSmallest = true;
            }
        }
    }

    // If no valid second smallest found, return 42
    return secondSmallest;
}

int main() {
    std::vector<int> inputNumbers;  // Vector to store user input numbers
    std::cout << "Please enter some numbers (q to quit)\n";
    
    // Read integers from user until invalid input is detected
    do {
        int nextNumber;
        std::cin >> nextNumber;  // Input next number
        if (std::cin.good()) {  // If input is valid, add to vector
            inputNumbers.push_back(nextNumber);
        }
    } while (std::cin.good());  // Loop until invalid input (e.g., 'q') is entered

    std::vector<int> partials = partialSums(inputNumbers);  // Get the partial sums of the input numbers
    printVector(partials);  // Print the partial sums

    // Output the second smallest partial sum, or 42 if it doesn't exist
    std::cout << "The second smallest partial sum is " << secondSmallestOrElse42(partials) << std::endl;

    return 0;
}
