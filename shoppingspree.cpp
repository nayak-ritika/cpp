#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Item{
    public:
    string itemName;
    int priceDollars;
};

const unsigned int MAX_ITEMS_IN_SHOPPING_BAG = 3;

void ShoppingBagCombinations(vector<Item> currBag, vector<Item> remainingItems){
    int bagValue;
    Item tmpGroceryItem;
    unsigned int i;

    if(currBag.size() == MAX_ITEMS_IN_SHOPPING_BAG){
        bagValue = 0;

        for(i = 0; i < currBag.size(); ++i){
            bagValue = bagValue + currBag.at(i).priceDollars;
            cout << currBag.at(i).itemName << "  ";
        }
        cout << "= $" << bagValue << endl;
    }
    else{

        for(i = 0; i < remainingItems.size(); ++i){
            tmpGroceryItem = remainingItems.at(i);
            remainingItems.erase(remainingItems.begin() + i);
            

        }
    }
}