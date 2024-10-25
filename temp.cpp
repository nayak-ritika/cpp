#include <iostream>
#include <vector>

int main() {
    int vectorSize;
    std::cout << "Enter vector size : ";
    std::cin >> vectorSize;

    std::vector<int> vectorMunish(vectorSize); // declaring a vector of ints of size vectorSize
    // std::cout << "Enter the values : ";

    for (int i = 0; i < vectorSize; i++) {
        std::cout << "Enter " << i << "th value :";
        std::cin >> vectorMunish.at(i);
    }
    std::cout << "You Entered : ";
    for (int i = 0; i < vectorSize; i++) {
        std::cout << vectorMunish.at(i) << " ";
    }
    return 0;
}