
#include<iostream>
using namespace std;

template<typename T>
struct Point {
   T x, y;
};

template<typename T>
Point<T> addPoints(Point<T> p1, Point<T> p2) {
   Point<T> p3;
   p3.x = p1.x + p2.x;
   p3.y = p1.y + p2.y;
   return p3;
}

int main() {
   Point<int> p1 = {10, 15};
   Point<int> p2 = {5, 10};
   Point<int> p3 = addPoints(p1, p2);
   cout<<"("<<p3.x<<", "<<p3.y<<")"<<endl;

   Point<double> p4 = {10.5, 15.5};
   Point<double> p5 = {5.5, 10.5};
   Point<double> p6 = addPoints(p4, p5);
   cout<<"("<<p6.x<<", "<<p6.y<<")"<<endl;

    return 0;
}