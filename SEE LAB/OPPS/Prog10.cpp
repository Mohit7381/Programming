#include<iostream>
#include<math.h>
using namespace std;
class Shape{
    protected:
        float area,perimeter;
    public:
        virtual void computeArea()=0;
        virtual void computePerimeter()=0;
        virtual void display()=0;
        virtual void setDimensions()=0;
};
class Rectangle:public Shape{
    float length,breadth;
    public:
        Rectangle(){
            length=0;
            breadth=0;
        };
        void setDimensions(){
            cout<<"Enter the length and breadth of the rectangle:"<<endl;
            cin>>length>>breadth;
        }
        void computeArea(){
            area=length*breadth;
        }
        void computePerimeter(){
            perimeter=2*(length+breadth);
        }
        void display(){
            cout<<"The area of the rectangle is:"<<area<<endl;
            cout<<"The perimeter of the rectangle is:"<<perimeter<<endl;
        }
};
class Triangle:public Shape{
    float s1,s2,s3;
    public:
        Triangle(){
            s1=0;
            s2=0;
            s3=0;
        };
        void setDimensions(){
            cout<<"Enter the sides of the triangle:"<<endl;
            cin>>s1>>s2>>s3;
        }
        void computeArea(){
            float s=(s1+s2+s3)/2;
            area=sqrt(s*(s-s1)*(s-s2)*(s-s3));
        }
        void computePerimeter(){
            perimeter=s1+s2+s3;
        }
        void display(){
            cout<<"The area of the triangle is:"<<area<<endl;
            cout<<"The perimeter of the triangle is:"<<perimeter<<endl;
        } 
     };
int main(){
    Shape *s1;
    Shape *s2;
    s1=new Rectangle;
    s1->setDimensions();
    s1->computeArea();
    s1->computePerimeter();
    s1->display();
    s2=new Triangle;
    s2->setDimensions();
    s2->computeArea();
    s2->computePerimeter();
    s2->display();
    delete s2;
    delete s1;
    return 0;
}
