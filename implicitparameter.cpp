#include <iostream>

class ShapeSquare {
    public:
        void SetSideLength(double sideLength);
        double GetArea() const;
    private:
        double sideLength;
};

void ShapeSquare::SetSideLength(double sideLength) {
    this->sideLength = sideLength;
    // Data member      Parameter
}

double ShapeSquare::GetArea() const {
    return sideLength * sideLength;
}

int main(){
    ShapeSquare square1;

    square1.SetSideLength(1.2);
    std::cout << "Square's area: " << square1.GetArea() << std::endl;

    return 0;
}
