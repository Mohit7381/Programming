#include<iostream>
using namespace std;    
double readKey(){
    double d1;
    cin>>d1;
    if(cin.fail()){
        throw invalid_argument("Invalid input. Please enter a valid double.");
    }
    return d1;
}
double division(double d1,double d2){
    if(d2==0){
        throw runtime_error("Division by zero is not allowed.");
    }
    return d1/d2;
}
int main(){
    double d1,d2;
    try{
        d1=readKey();
        d2=readKey();
        cout<<"The division of the numbers is:"<<division(d1,d2)<<endl;
    }
     catch (const std::invalid_argument& e) {
        std::cerr << "Invalid input: " << e.what() << std::endl;
    } catch (const std::runtime_error& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}