#include<iostream>
using namespace std;
class DB;
class DM{
    double meter;
    double centimeter;
    public:
        DM():meter(0),centimeter(0){}
        DM(int m,int cm):meter(m),centimeter(cm){}
        void display(){
            cout<<"The distance is: "<<meter<<" meters and "<<centimeter<<" centimeters"<<endl;
        }
        double getMeter(){
            return meter;
        }
        double getCentimeter(){
            return centimeter;
        }
        friend void add(DM,DB);
};
class DB{
    double feet;
    double inches;
    public:
        DB():feet(0),inches(0){}
        DB(int f,int i):feet(f),inches(i){}
        void display(){
            cout<<"The distance is: "<<feet<<" feet and "<<inches<<" inches"<<endl;
        }
        double getFeet(){
            return feet;
        }
        double getInches(){
            return inches;
        }
        friend void add(DM,DB);
};
void add(DM d,DB m){
    int meter;
    int centimeter;
    int feet;
    int inches;
    cout<<"Given input in Meter and Centimeter:"<<m.getFeet()*0.348+d.getMeter()<<"meters and "<<m.getInches()*2.54+d.getCentimeter()<<" centimeters"<<endl;
    cout<<"Given input in Feet and Inches:"<<d.getMeter()*3.281+m.getFeet()<<"Feet and"<<d.getCentimeter()*0.394+m.getInches()<<" inches"<<endl;
}
int main(){
    DM d(23.33,45.67);
    DB b(12.34,56.78);
    d.display();
    b.display();
    add(d,b);
    return 0;
}