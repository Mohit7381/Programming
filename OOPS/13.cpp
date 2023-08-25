#include<iostream>
#include<stdexcept>
using namespace std;
double readDoubleFromKeyboard(const string& prompt){
        cout<<prompt;
        double num;
        cin>>num;
        if(cin.fail())
                throw runtime_error("Invalid Input. Please enter a valid Double");
        return num;
}
double divideNumbers(double num1, double num2){
        if(num2 == 0)
                throw runtime_error("Division by Zero is not Allowed");
        return num1 / num2;
}
int main(){
        try{
                double num1 = readDoubleFromKeyboard("Enter Num 1: ");
                double num2 = readDoubleFromKeyboard("Enter Num 2: ");

                double result = divideNumbers(num1, num2);
                cout<<"Result is: "<<result<<endl;
        }
        catch(const exception& e){
                cerr<<"An Exception Occured: "<<e.what()<<endl;
        }
        return 0;
}