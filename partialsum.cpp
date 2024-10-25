#include <iostream>
#include <vector>

std::vector<int> partialSums(const std::vector<int>& inputNumbers)
{
    std::vector<int> answer;
    int sums = 0;

    for (int i = 0; i < inputNumbers.size(); i++)
    {
        sums = inputNumbers.at(i) + sums;
        answer.push_back(sums);
    }

    return answer;
}

void printVector(const std::vector<int>& partials)
{
    for (int i = 0; i < partials.size(); i++)
    {
        std::cout << partials.at(i);
        if (i != partials.size() - 1){
                std::cout << ", "; 
        }
    }
}

int secondSmallestOrElse42(const std::vector<int>& partials)
{  
    if (partials.size() < 2) {
        return 42;
    }
    
    int smallest = partials.at(0); 
    for (int i = 0; i < partials.size(); ++i){
        if (partials.at(i) < smallest) {
            smallest = partials.at(i);
        }
    }

    int secondsmallest = 1000000; 

    bool secondSmallestFound = false;
    for (int i = 0; i < partials.size(); i++) {
        if (partials.at(i) != smallest) {
            if (partials.at(i) < secondsmallest) {
                secondSmallestFound = true;
                secondsmallest = partials.at(i);
            }
        }
    }
    if (!secondSmallestFound) {
        return 42;
    } 
    else {
        return secondsmallest;
    }
}

int main()
{
    std::vector<int> inputNumbers;
    std::cout << "Please enter some numbers (q to quit)\n";
    do
    {
        int nextNumber;
        std::cin >> nextNumber;
        if (std::cin.good())
        {
            inputNumbers.push_back(nextNumber);
        }
    } while (std::cin.good());

    std::vector<int> partials = partialSums(inputNumbers);
    printVector(partials);
    std::cout << "The second smallest partial sum is " << secondSmallestOrElse42(partials) << std::endl;

    return 0;
}
 