#include <iostream>
#include <string>

class Restaurant {
    public:
        void SetName(std::string restaurantName);
        void SetRating(int userRating);
        void Print();

    private:
        std::string name = "NoName";   //name and rating was not set
        int rating = -1;
};

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
    Restaurant favLunchPlace;   //Initialize members with values in class definition

    favLunchPlace.Print();

    favLunchPlace.SetName("Toto's");
    favLunchPlace.SetRating(5);

    favLunchPlace.Print();

    return 0;
}