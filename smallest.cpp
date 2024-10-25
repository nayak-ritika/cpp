#include <iostream>
#include <vector>

// Function to find the smallest +ive
int findSmallestMissingNumber(std::vector<int> inputVector) 
{
    // size of the input 
    int vectorSize = inputVector.size();

    // if the vector is empty, the smallest is 1
    if (vectorSize == 0) 
    {
        return 1;
    }

    // minimum value in input
    int minimumValue = inputVector[0];
    for (int number : inputVector)
    {
        if (number < minimumValue) {
            minimumValue = number;
        }
    }

    // boolean vector to check number in  range -> minimumValue, minimumValue + vectorSize
    std::vector<bool> num(vectorSize + 1, false);

    // for loop for checking vectors in boolean vector
    for (int i = 0; i < vectorSize; ++i) 
    {
        int number = inputVector[i];
        // checking if number is within range -> minimumValue, minimumValue + vectorSize
        if (number > minimumValue && number <= minimumValue + vectorSize)
        {
            num[number - minimumValue] = true;
        }
    }

    // smallest missing number
    for (int i = 1; i <= vectorSize; ++i) 
    {
        if (!num[i]) 
        {
    
            return minimumValue + i;
        }
    }

    //returning next number
    return minimumValue + vectorSize + 1;
}

int main() 
{
    int vectorSize;
    std::cout << "How many numbers? ";
    std::cin >> vectorSize;

    std::vector<int> inputVector(vectorSize);
    std::cout << "Please enter the numbers ";

    for (int i = 0; i < vectorSize; i++) 
    {
        std::cin >> inputVector.at(i);
    }

    const int smallestMissing = findSmallestMissingNumber(inputVector);

    std::cout << "The smallest missing number is " << smallestMissing << std::endl;

    return 0;
}
