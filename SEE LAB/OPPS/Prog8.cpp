#include<iostream>
using namespace std;
class Stundent {
    protected:
        string USN;
    public:
        void setUSN(){
            cout<<"Enter the USN:"<<endl;
            cin>>USN;
        }
        void getUSN(){
            return USN;
        }
};
class Test{
    protected:
        int marks[5];
    public:
        void setMarks(){
            cout<<"Enter the marks:"<<endl;
            for(int i=0;i<5;i++){
                cin>>marks[i];
            }
        }
        void getMarks(){
            int total=0;
            for(int i=0;i<5;i++){
                total+=marks[i];
            }
            return total;
        }
};
class Sports{
    protected:
        int score;
    public:
        void setScore(){
            cout<<"Enter the score:"<<endl;
            cin>>score;
        }
        void getScore(){
            return score;
        }
};
class Result:public Test,public Sports{
    public;
        void display(){
            cout<<"The result is:"<<endl;
            cout<<"The USN is:"<<getUSN()<<endl;
            cout<<"The marks are:"<<getMarks()<<endl;
            cout<<"The score is:"<<getScore()<<endl;
            cout<<"The total is:"<<getMarks()+getScore()<<endl;
        }
};