#include<iostream>
using namespace std;
#define throw(...)
void Xhandler(int test) throw(int,char,double){
        if(test==0) throw test;
        if(test==1) throw 'a';
        if(test==2) throw 123.23; 
}
int main(){
    cout<<"Start"<<endl;
    try{
    Xhandler(0);
    Xhandler(1);
    Xhandler(2);
    }
    catch(int i){
        cout<<"Caught an integer"<<endl;
    }
    catch(...){
        cout<<"Caught one!"<<endl;
    }
    cout<<"End"<<endl;
    return 0;
}