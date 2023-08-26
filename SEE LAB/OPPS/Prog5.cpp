#include<iostream>
using namespace std;
class Complex{
    int real;
    int img;
    public:
        Complex(){
            real=0;
            img=0;  
        };
        Complex(int r,int i):real(r),img(i){};
        Complex ADD(int a,Complex s);
        Complex ADD(Complex &s1,Complex &s2);
        int getReal();
        int getImg();
        void display(Complex s);
};
Complex Complex::ADD(int a,Complex S){
    Complex res;
    res.real=a+S.real;
    res.img=S.img;
    return res;
}
Complex Complex::ADD(Complex &s1,Complex &s2){
    Complex res;
    res.real=s1.real+s2.real;
    res.img=s1.img+s2.img;
    return res;
}
void Complex::display(Complex s){
    cout<<s.real<<"+"<<s.img<<"i"<<endl;
}
int Complex::getReal(){
    return real;
}
int Complex::getImg(){
    return img;
}   
int main(){
    Complex s1(2,3);
    Complex s2(4,5);
    Complex s3;
    s3=s3.ADD(5,s1);
    s3.display(s3);
    s3=s3.ADD(s1,s2);
    s3.display(s3);
    return 0;
}