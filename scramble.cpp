#include <iostream>
#include<string>
using namespace std;

/* Output every possible combination of a word.
   Each recursive call moves a letter from
   remainLetters to scramLetters.
*/

void ScrambleLetters(string remianLetters, string scramLetters){
    string temporaryWordCombString;
    unsigned int i;

    if(remianLetters.size() == 0){
        cout << scramLetters << endl;
    }
    else{
        for(i = 0; i < remianLetters.size(); ++i){
            temporaryWordCombString = remianLetters.substr(i, 1);
            remianLetters.erase(i, 1);
            scramLetters = scramLetters + temporaryWordCombString;

            ScrambleLetters(remianLetters, scramLetters);

            remianLetters.insert(i, temporaryWordCombString);

            scramLetters.erase(scramLetters.size() - 1, 1);
        }
    }
}

int main(){
    string wordScramble;

    cout << "Enter a word to be scrambled: ";
    
    cin >> wordScramble;

    ScrambleLetters(wordScramble, "");

    return 0;
}