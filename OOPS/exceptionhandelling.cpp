#include<iostream>
using namespace std;
class B{};
class D:public B{

};
int main(){
    try{
        D drived;
        B b;
        throw drived;
        throw b;
    }
    catch(D d){
        cout<<"Caught Derived class"<<endl;
    }
    catch(B b){
        cout<<"Caught Base class"<<endl;
    }
    return 0;
}