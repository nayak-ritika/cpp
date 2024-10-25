#include <iostream>

int main(){

    double num1;
    double num2;
    char oper = ' ';   
    double result;

    while ( oper != 'q' ) {                       
        std::cout << "Enter the expression: " << std::endl;

        std::cin >> oper >> num1 >> num2; 

        switch(oper){
            case '*':
                result = num1 * num2;
                std::cout << num1 << " " << oper <<  " " << num2 << " = " << result;
                break;
            case '/':
                result = num1 / num2;
                std::cout << num1 << " " << oper <<  " " << num2 << " = " << result;
                break;
            case '+':
                result = num1 + num2;
                std::cout << num1 << " " << oper <<  " " << num2 << " = " << result;
                break;
            case '-':
                result = num1 - num2;
                std::cout << num1 << " " << oper <<  " " << num2 << " = " << result;
                break;
        }
        std::cout << std::endl;   
    }


    return 0;
}
 
