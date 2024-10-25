#include <iostream>
#include <vector>

double CalcAverage(int length, std::vector<int> list){
    double sum = 0;
    for (int i = 0; i < length; ++i){
        sum += list.at(i);
    }
    double average = 0;
    average = sum / length;

    return average;
}

double CalcAverageNegNum(int length, std::vector<int> list){
    double sum = 0;
    int countNegNum = 0;
    for(int i = 0; i < length; ++i){
        if(list.at(i) < 0){
            sum += list.at(i);
            countNegNum++;
        }
    }
    double average = 0;
    if (countNegNum == 0){
        return 0;
    }
    average = sum / countNegNum;

    return average;

}



int CalcMaximum(std::vector<int> list){
    int maximum = list.at(0);
    for (int i = 0; i < list.size(); ++i){
        if (list.at(i) > maximum){
            maximum = list.at(i);  
        }
    }
    return maximum;

}

int CalcMinimum(std::vector<int> list){
    int minimum = list.at(0);
    for (int i = 0; i < list.size(); ++i){
        if (list.at(i) < minimum){
            minimum = list.at(i);  
        }
    }
    return minimum;

}


int main(){

    std::vector<int> list;
    int length;
    std::cout << "Length of the vector: " << std::endl;
    std::cin >> length;

    list.resize(length);

    for(int i = 0; i < length; ++i){
        std::cin >> list.at(i);

    }

    std::cout << "Average: " << CalcAverage(length,list)<< std::endl;

    std::cout << "Average Neg Num: " << CalcAverageNegNum(length,list)<< std::endl;

    std::cout << "Maximum: " << CalcMaximum(list) << std::endl;

    std::cout << "Minimum: " << CalcMinimum(list) << std::endl; 

    return 0;
}