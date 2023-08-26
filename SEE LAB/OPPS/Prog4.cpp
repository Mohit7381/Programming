#include<iostream>
using namespace std;
class Rectangle{
    int length;
    int breadth;
    int area;
    public:
        Rectangle(){
            length=0;
            breadth=0;
            area=0;
        }
        Rectangle(int l,int b=0){
            length=l;
            breadth=b;
        }
        Rectangle &setDimensions(const int&,const int&);
        int computeArea();
        int computePerimeter();
};
Rectangle &Rectangle::setDimensions(const int &l,const int &b){
    length=l;
    breadth=b;
    return *this;
}
int Rectangle::computeArea(){
    area=length*breadth;
    return area;
}
int Rectangle::computePerimeter(){
    return 2*(length+breadth);
}
int main(){
    Rectangle r1;
    Rectangle r2(10);
    Rectangle r3(10,20);
    r1.setDimensions(10,20);
    cout<<"The area of the rectangle is:"<<r1.computeArea()<<endl;
    cout<<"The perimeter of the rectangle is:"<<r1.computePerimeter()<<endl;
    cout<<"The area of the rectangle is:"<<r2.computeArea()<<endl;
    cout<<"The perimeter of the rectangle is:"<<r2.computePerimeter()<<endl;
    cout<<"The area of the rectangle is:"<<r3.computeArea()<<endl;
    cout<<"The perimeter of the rectangle is:"<<r3.computePerimeter()<<endl;
    return 0;
}