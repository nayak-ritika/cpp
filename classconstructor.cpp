#include <iostream>
#include <string>

class Restaurant {
    public:
        Restaurant();
        void SetName(std::string restaurantName);
        void SetRating(int userRating);
        void Print();

    private:
        std::string name = "NoName";   //name and rating was not set
        int rating = -1;
};

Restaurant::Restaurant(){   //default constructor
    name = "NoName";   //default name
    rating = -1;   //default  rating
}

void Restaurant::SetName(std::string restaurantName){
    name = restaurantName;
}

void Restaurant::SetRating(int userRating){
    rating = userRating;
}

void Restaurant::Print(){
    std::cout << name << " -- " << rating << std::endl;
}

int main(){
    Restaurant favLunchPlace;   //automatically calls the default constructor

    favLunchPlace.Print();

    favLunchPlace.SetName("Toto's");
    favLunchPlace.SetRating(5);

    favLunchPlace.Print();

    return 0;
}