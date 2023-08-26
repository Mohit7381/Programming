#include<iostream>
using namespace std;
int checkArmsrong(int num){
    int temp=num;
    int sum=0;
    while(temp>0){
        int rem=temp%10;
        sum+=rem*rem*rem;
        temp/=10;
    }
    if(sum==num){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int num;
    cout<<"Enter the number:"<<endl;
    cin>>num;
    if(checkArmsrong(num)){
        cout<<"The number is an Armstrong number"<<endl;
    }
    else{
        cout<<"The number is not an Armstrong number"<<endl;
    }
    return 0;
}