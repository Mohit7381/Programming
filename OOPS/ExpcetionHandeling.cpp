#include <iostream>
using namespace std;
class shape{
    int n1,n2,n3;
    public:
        void input(){
            cout<<"Give input";
            cin>>n1>>n2>>n3;
        }        
};
class Rectangle:public shape{
    public:
        int n=2;
};
class Triangle :public shape{
    public:
        int n=3;
};
int main(){
    int n;
    Rectangle r;
    Triangle t;
    cin>>n;
    try{
        if(n==r.n){
            cout<<"Rectangle has the 2 sides\n";
            cout<<"Succesfully executed"<<endl;
        }
        else if(n>2){
            throw n;    
        }
    }catch(int t){
        cout<<"Not able to calculate for "<<t<<"Sides"<<endl;
    }
    
}