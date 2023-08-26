#include<iostream>
using namespace std;
template<typename T>class Calculator{
    public:
        T add(T a,T b){
            return a+b;
        }
        T subtract(T a,T b){
            return a-b;
        }
        T multiply(T a,T b){
            return a*b;
        }
        T divide(T a,T b){
            return a/b;
        }
};
int main(){
    int num1,num2;
    cout<<"Enter the two numbers:"<<endl;
    cin>>num1>>num2;
    Calculator<int> calc;
    int choice;
    while(choice!=5){
        cout<<"1.Add"<<endl;
        cout<<"2.Subtract"<<endl;
        cout<<"3.Multiply"<<endl;
        cout<<"4.Divide"<<endl;
        cout<<"5.Exit"<<endl;
        cout<<"Enter your choice:"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
            cout<<"The sum of the numbers is : "<<calc.add(num1,num2)<<endl;
            break;
        
        case 2:
            cout<<"The difference of two numbers is : "<<calc.subtract(num1,num2)<<endl;
            break;
        case 3:
            cout<<"The product of two numbers is : "<<calc.multiply(num1,num2)<<endl;
            break;
        
        case 4:
            cout<<"The divison of Two numbers is : "<<calc.divide(num1,num2)<<endl;
            break;     
        default:
            cout<<"Invalid choice"<<endl;
            break;
        }
    }
    return 0;
}