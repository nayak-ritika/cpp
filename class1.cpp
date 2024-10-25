//A complete class definition, and use of that class.

#include <iostream>
#include <string>

class Restaurant {
    public:
        void SetName(std::string RestaurantName);
        void SetRating(int userRating);
        void Print();

    private:
        std::string name;
        int rating;
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

    Restaurant favLunchPlace;
    Restaurant favDinnerPlace;

    favLunchPlace.SetName("Toto's");
    favLunchPlace.SetRating(5);

    favDinnerPlace.SetName("Munish's");
    favDinnerPlace.SetRating(5);

    std::cout << "Our favourite restaurants: " << std::endl;
    favLunchPlace.Print();
    favDinnerPlace.Print();

    return 0;

}

