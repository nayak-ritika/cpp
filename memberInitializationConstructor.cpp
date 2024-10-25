#include <iostream>
#include <vector>

class SampleClass {
    public:
        SampleClass();
        void Print() const;
    private:
        std::vector<int> itemList;
};

SampleClass::SampleClass() : itemList(2){
}  // itemList gets constructed with size 2

void SampleClass::Print() const {
    std::cout << "Size: " << itemList.size() << std::endl;
    std::cout << "Item1: " << itemList.at(0) << std::endl;
    std::cout << "Item2: " << itemList.at(1) << std::endl;
}

int main()
{
    SampleClass myClass;
    myClass.Print();
    return 0;
}