#include<iostream>
using namespace std;
int max(int n1,int n2,int n3){
    int max=n1;
    if(n2>max){
        max=n2;
    }
    if(n3>max){
        max=n3;
    }
    return max;
}
int main(){
    int num1;
    int num2;
    int num3;
    cin>>num1>>num2>>num3;
    cout<<"The maximum of these numbers are:"<<max(num1,num2,num3)<<endl;
}