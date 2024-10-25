#include <iostream>
#include <vector>

int main(){
    int length;
    std::cout << "Enter the length of vector: " << std::endl;
    std::cin >> length;

    std::vector<int> values(length);
    for(int i = 0; i < length; ++i){
        std::cin >> values.at(i);
    }

    double average = 0;
    double sum = 0;
    for (int i = 0; i < length; ++i){
        sum += values.at(i);
    }
    
    average = sum / length;

    std::cout << "Average of the vector: " << average << std::endl;

    return 0;
}