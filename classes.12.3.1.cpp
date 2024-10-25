#include <iostream>

class Person{
    public:
        void SetName(std::string nameToSet);
        std::string GetName();
    
    private:
        std::string name;

};

void Person::SetName(std::string nameToSet){
    name = nameToSet;
}

std::string Person::GetName(){
    return name;
}

int main(){

    std::string userName;
    Person person1;

    userName = "Toto";

    person1.SetName(userName);
    std::cout << "Ik ben " << person1.GetName();

    return 0;
}