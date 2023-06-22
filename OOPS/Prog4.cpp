#include <iostream>
using namespace std;
class Rectangle {
private:
    int length;
    int breadth;
    int area;

public:
    Rectangle() : length(0), breadth(0), area(0) {}
    Rectangle(const int& len, const int& brd){
        length=len;
        breadth=0; 
    }
    Rectangle& setDimensions(const int& len, const int& brd) {
        length = len;
        breadth = brd;
        return *this;
    }

    int computeArea() {
        area = length * breadth;
        return area;
    }

    int computePerimeter() {
        return 2 * (length + breadth);
    }
};

int main() {
    Rectangle rect1;
    rect1.setDimensions(4, 5);
    cout << "Area of Rectangle 1: " << rect1.computeArea() << endl;
    cout << "Perimeter of Rectangle 1: " << rect1.computePerimeter() << endl;

    Rectangle rect2(3,0);
    cout << "Area of Rectangle 2: " << rect2.computeArea() << endl;
    cout << "Perimeter of Rectangle 2: " << rect2.computePerimeter() << endl;

    return 0;
}

