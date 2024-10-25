#include<iostream>

int main() {
    int value = 4;
    int multiply = 20;
    while (value > 0) {
        multiply = multiply * value;
        value = value - 1;
        if (value == 1) {
            multiply = 2;
        }
        std::cout << value << " ";
        std::cout << multiply << std::endl; 
    }
    return 0;
}