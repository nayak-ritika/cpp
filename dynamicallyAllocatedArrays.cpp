#include <iostream>

int main(){
    int numMinutes;
    double* bodyTemperatures;

    std::cin >> numMinutes;

    bodyTemperatures = new double[numMinutes + 1];

    for(int i = 0; i <= numMinutes; ++i){
        std::cin >> bodyTemperatures[i];
    }

    std::cout << "Initial body temperature: " << bodyTemperatures[0] << "F" << std::endl;
    for (int i = 1; i <= numMinutes; ++i) {
        std::cout << "Body temperature after " << i << " minute(s) of exercise: " << bodyTemperatures[i] << "F ";
        std::cout << "Change: " << bodyTemperatures[i] - bodyTemperatures[i - 1] << "F" << std::endl;
    }
   
    delete[] bodyTemperatures;

    return 0;
}