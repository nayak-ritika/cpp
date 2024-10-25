//given a vector of ints, find max of the values:

#include <iostream>
#include <vector>


int main(){
    int length;
    std::cout << "Enter the length of vector" << std::endl ;
    std::cin >> length;
    std::vector<int> values(length);
    for (int i = 0; i < length; ++i ) {
        std::cin >> values.at(i);
    }
    
    int maximum = 0;
    for (int i = 0; i < values.size(); ++i){
        if (values.at(i) > maximum){
            maximum = values.at(i);  
        }
    }
    std::cout << maximum << std::endl;

    return 0;
}