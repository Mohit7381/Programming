#include<iostream>
using namespace std;
template<typename T>
T thirdPoint(T x1,T x2){
    return x2+x1;
}

int main(){
    int x1,y1,x2,y2;
    cout<<"Enter the coordinates of the first point:"<<endl;
    cin>>x1>>y1;
    cout<<"Enter the coordinates of the second point:"<<endl;
    cin>>x2>>y2;
    cout<<"The coordinates of the third point are:"<<thirdPoint<int>(x1,x2)<<","<<thirdPoint<int>(y1,y2)<<endl;
    return 0;
}