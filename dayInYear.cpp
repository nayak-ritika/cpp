#include <iostream>
#include <cassert>

int dayInYear(int day, int month, int year);

void check_dayInYear(){
    std::cout << "Running test cases for dayInYear()" << std::endl;

    assert(dayInYear(1, 1, 2020) == 1);
    assert(dayInYear(29, 2, 2020) == 60);
    assert(dayInYear(31, 12, 2020) == 366);

    assert(dayInYear(1, 1, 2021) == 1);
    assert(dayInYear(28, 2, 2021) == 59);
    assert(dayInYear(31, 12, 2021) == 365);

    assert(dayInYear(31, 1, 2021) == 31);
    assert(dayInYear(1, 3, 2021) == 60);

    assert(dayInYear(1, 3, 2020) == 61);

    std::cout << "All tests passed!" << std::endl;

}

int main(){

    check_dayInYear();

    return 0;
}