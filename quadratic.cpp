#include <iostream>
#include <cmath>
#include <vector>

double computeDiscriminant(double a, double b, double c = 2) {
    double delta;

    delta = std::pow(b,2) - (4 * a * c);
    return delta;
}

int numberOfSolution(double delta) {

    int numSolution;

    if (delta > 0) {
        numSolution = 2;
    }
    else if (delta == 0) {
        numSolution = 1;
    }
    else {
        numSolution = 0;
    }
    return numSolution;
}

std::vector<double> quadraticFormula(double a, double b, double delta){
    double x1, x2;

    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);
 
    std::vector<double> solutions;

    solutions.push_back(x1);
    solutions.push_back(x2);

    return solutions;
}

int main() {
    double a, b, c, delta;

    std::cout << "Please enter the values of a, b, and c:" << std::endl;

    std::cin >> a >> b >> c;

    delta = computeDiscriminant(a, b);

    int numSolution;
    numSolution = numberOfSolution(delta);

    std::vector<double> solutions;
    solutions = quadraticFormula(a, b, delta);

    if (numSolution == 2) {
        std::cout << "There are 2 solutions." << std::endl;
        std::cout << "The solutions are: " <<  solutions.at(0)  << " and " <<  solutions.at(1)  << std::endl;
    }
    else if (numSolution == 1) {
        std::cout << "There is 1 solution." << std::endl;
        std::cout << "The solution is: " <<  solutions.at(0)  << std::endl;
    }
    else {
        std::cout << "There is no solution." << std::endl;
    }

    return 0;
}