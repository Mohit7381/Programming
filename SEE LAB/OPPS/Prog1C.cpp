#include<iostream>
using namespace std;
int factorial(int num){
    if(num==0){
        return 1;
    }
    else{
        return num*factorial(num-1);
    }
}
int main(){
    int num;
    cout<<"Enter the number:"<<endl;
    cin>>num;
    cout<<"The factorial of the number is:"<<factorial(num)<<endl;
    return 0;
}