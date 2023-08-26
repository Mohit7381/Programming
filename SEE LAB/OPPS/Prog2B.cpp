#include<iostream>
using namespace std;
class Phone{
    string areaCode;
    int exchange;
    int number;
    public:
        Phone(){
            areaCode="044";
            exchange=234;
            number=8900;
        }
        void getNumber(){
            cout<<"Enter the area code:"<<endl;
            cin>>areaCode;
            cout<<"Enter the exchange:"<<endl;
            cin>>exchange;
            cout<<"Enter the number:"<<endl;
            cin>>number;
        }
        void getOutpt(){
            cout<<"The number is: ("<<areaCode<<") "<<exchange<<"-"<<number<<endl;
        }
};
int main(){
    Phone p;
    Phone p1;
    p1.getNumber();
    p1.getOutpt();
    p.getOutpt();
    return 0;
}