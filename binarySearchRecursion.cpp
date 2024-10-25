#include <iostream>

void GuessNumber(int lowVal, int highVal){
    int midVal;                               //MID VALUE
    char userAnswer;                          //USER RESPONSE

    midVal = (highVal + lowVal)/2;

    std::cout << "Is it " << midVal << "? (your number is lower/your number is higher/any other key, guess is right): " << std::endl;

    std::cin >> userAnswer;

    if((userAnswer != 'your number is lower') && (userAnswer != 'your number is higher')){ //BASE CASE: found number
        std::cout << "Thank you!" << std::endl;                  
    }
    else{                               //RECURSIVE CASE
        if(userAnswer == 'your number is lower'){        //GUESSING IN LOWER
            GuessNumber(lowVal, midVal);     //RECURISVE CALL
        }
        else{                                 // GUESSING IN UPPER
            GuessNumber(midVal+1, highVal);       //RECURISVE CALL
        }
    }
}

int main(){

    std::cout << "Choose a number from 0 to 100" << std::endl;
    std::cout << "Answer with: " << std::endl;
    std::cout << "   your number is lower." << std::endl;
    std::cout << "   your number is higher." << std::endl;
    std::cout << "   any other key, guess is right." << std::endl;

    GuessNumber(0,100);    //Calling Recursive Function to guess the number.
 
    return 0;
}

