#include<iostream>
using namespace std;
template<class X,class Y>void swap(X &a,Y &b)
{
    X temp;
    temp=a;
    a=static_cast<X>(b);
    b=static_cast<Y>(temp);
}
int main(){
    int a=10;
    float b=1225.22;
    swap<int ,float>(a,b);
    cout<<a<<"\n"<<b<<endl;
    return 0;;
} 