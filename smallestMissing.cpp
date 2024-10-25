#include <iostream>
#include <vector>
// [1, 2, 6, 5]

bool IsiThereInVector (std::vector<int> listNum, int i) {
    bool foundi = false;
    int vectorSize = listNum.size();
    for (int j = 0; j < vectorSize; j++) {
        if (listNum.at(j) == i) {
            foundi = true;
        }
    }
    return foundi;
}

int findSmallestMissingNumber (std::vector<int> listNum) {
    int smallestMissing = 0;
    // Step - 1 : Try to find 1 in all values of listNum, if 1 is not there then answer is 1.
    // Step - 2 : Try to find 2, if 2 is not there then answer is 2.
    // Step - 3 : try to find i, if i is..... .
    for ( int i = 1; i <= listNum.size(); i++) {
        bool isiThere = IsiThereInVector(listNum, i);
        if ( !isiThere ) {
            smallestMissing = i;
        }
    }
    if (smallestMissing == 0) {
        smallestMissing = listNum.size() + 1;
    }
    return smallestMissing;
}

int main(){
    int vectorSize;
    std::cout << "How many numbers? ";
    std::cin >> vectorSize;

    std::vector<int> inputVector(vectorSize);
    std::cout << "Please enter the numbers ";

    for ( int i=0; i<vectorSize; i++){
        std::cin >> inputVector.at(i);
    }
    const int smallestMissing = findSmallestMissingNumber(inputVector);
    std::cout << "The smallest missing number is " << smallestMissing << std::endl;

    return 0;
}
