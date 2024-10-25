#include <iostream>
#include <string>
#include <vector>

/* Finds index of string in vector of strings, else -1.
   Searches only with index range low to high
   Note: Upper/lower case characters matter
*/

int FindMatch(std::vector<std::string> stringsList, std::string itemMatch, int lowVal, int highVal){
    int midVal;                 // Midpoint of low and high values
    int itemPosition;           // Position where item found, -1 if not found
    int rangeSize;              // Remaining range of values to search for match


    rangeSize = (highVal - lowVal) + 1;
    midVal = (highVal + lowVal) / 2;

    //Base Case 1: Item Found at midVal position
    if(itemMatch == stringsList.at(midVal)){
        itemPosition = midVal;
    }

    //Base Case 2: Match not found
    else if(rangeSize == 1){
        itemPosition = -1;
    }

    //Recursive case: search lower or upper half
    else{

        //search lower half, recursive call
        if(itemMatch < stringsList.at(midVal)){
            itemPosition = FindMatch(stringsList, itemMatch, lowVal, midVal);
        }

        //search upper half, recursive call
        else{
            itemPosition = FindMatch(stringsList, itemMatch, midVal + 1, highVal);
        }
    }
    return itemPosition;

}

int main(){
    std::vector<std::string> attendeesList(0);   // List of attendees
    std::string attendeesName;                   //Name of attendees   
    int matchPosition;                // Matched position in attendee list

    // Omitting part of program that adds attendees
   // Instead, we insert some sample attendees in sorted order

    attendeesList.push_back("Aman, Singh");
    attendeesList.push_back("Anshita, Singh");
    attendeesList.push_back("Kajal, Keshari");
    attendeesList.push_back("Munish, Gupta");
    attendeesList.push_back("Ritika, Nayak");

    //prompt user to enter a name to find
    std::cout << "Enter person's name: First, Last: " << std::endl;

    //user getline to allow space in name
    getline(std::cin, attendeesName);

    //calling function to match name, output results
    matchPosition = FindMatch(attendeesList, attendeesName, 0, attendeesList.size() - 1);

    if(matchPosition >= 0){
        std::cout << "Found at position " << matchPosition << "." << std::endl;
    }
    else{
        std::cout << "Not found. " << std::endl;
    }

    return 0;
}
