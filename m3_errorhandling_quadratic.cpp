#include <iostream>
#include <cmath>
#include <vector>
#include <stdexcept> // For std::runtime_error

double computeDiscriminant(double a, double b, double c) {
    double delta;
    delta = std::pow(b, 2) - (4 * a * c);
    return delta;
}

int numberOfSolution(double delta) {
    int numSolution;
    if (delta > 0) {
        numSolution = 2;
    } else if (delta == 0) {
        numSolution = 1;
    } else {
        numSolution = 0;
    }
    return numSolution;
}

std::vector<double> quadraticFormula(double a, double b, double delta) {
    double x1, x2;
    x1 = (-b + std::sqrt(delta)) / (2 * a);
    x2 = (-b - std::sqrt(delta)) / (2 * a);
    
    std::vector<double> solutions;
    solutions.push_back(x1);
    solutions.push_back(x2);
    return solutions;
}

// Function to read and validate three floating-point numbers
void readAndValidateInput(double &a, double &b, double &c) {
    if (!(std::cin >> a >> b >> c)) {
        throw std::runtime_error("An error occurred: Malformed user input");
    }
    if (std::cin.fail()) {
        std::cin.clear(); // Clear the error state
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore remaining input
        throw std::runtime_error("An error occurred: Malformed user input");
    }
}

int main() {
    double a, b, c, delta;
    std::cout << "Please enter the values of a, b, and c:" << std::endl;

    try {
        readAndValidateInput(a, b, c);
        
        if (a == 0.0) {
            throw std::runtime_error("An error occurred: a must not be zero");
        }

        delta = computeDiscriminant(a, b, c);
        int numSolution = numberOfSolution(delta);
        std::vector<double> solutions = quadraticFormula(a, b, delta);

        if (numSolution == 2) {
            std::cout << "There are 2 solutions." << std::endl;
            std::cout << "The solutions are: " << solutions.at(0) << " and " << solutions.at(1) << std::endl;
        } else if (numSolution == 1) {
            std::cout << "There is 1 solution." << std::endl;
            std::cout << "The solution is: " << solutions.at(0) << std::endl;
        } else {
            std::cout << "There is no solution." << std::endl;
        }
    } catch (const std::runtime_error& excpt) {
        std::cout << excpt.what() << std::endl;
    }

    return 0;
}
