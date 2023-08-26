#include<iostream>
using namespace std;
class STUDENT{
    string USN;
    string Name;
    int Age;
    public:
        void setStudentInfo(){
            cout<<"Enter the USN:"<<endl;
            cin.ignore();
            getline(cin,USN);
            cout<<"Enter the name:"<<endl;
            getline(cin,Name);
            cout<<"Enter the age:"<<endl;
            cin>>Age;  
        }
        string getName(){
            return Name;
        }
        string getUSN(){
            return USN;
        }
        int getAge(){
            return Age;
        }
};
class UGSTUDENT:public STUDENT{
    int Semester;
    int Fees;
    int Stipend;
    public:
        void setUGStudentInfo(){
            cout<<"Enter the semester:"<<endl;
            cin>>Semester;
            cout<<"Enter the fees:"<<endl;
            cin>>Fees;
            cout<<"Enter the stipend:"<<endl;
            cin>>Stipend;
        }
        int getSemester(){
            return Semester;
        }
        int getFees(){
            return Fees;
        }
        int getStipend(){
            return Stipend;
        }
};
class PGSTUDENT:public STUDENT{
    int Semester;
    int Fees;
    int Stipend;
    public:
        void setPGStudentInfo(){
            cout<<"Enter the semester:"<<endl;
            cin>>Semester;
            cout<<"Enter the fees:"<<endl;
            cin>>Fees;
            cout<<"Enter the stipend:"<<endl;
            cin>>Stipend;
        }
        int getSemester(){
            return Semester;
        }
        int getFees(){
            return Fees;
        }
        int getStipend(){
            return Stipend;
        }
};

int main(){
    UGSTUDENT u[4];
    PGSTUDENT p[4];
    cout<<"Enter Details of 5 UG Students:"<<endl;
    for(int i=0;i<5;i++){
        u[i].setStudentInfo();
        u[i].setUGStudentInfo();
    }
    cout<<"Enter Details of 5 PG Students:"<<endl;
    for(int i=0;i<5;i++){
        p[i].setStudentInfo();
        p[i].setPGStudentInfo();
    }
    cout<<"The details of the UG Students are:"<<endl;
    for(int i=0;i<5;i++){
        cout<<"The name is:"<<u[i].getName()<<endl;
        cout<<"The USN is:"<<u[i].getUSN()<<endl;
        cout<<"The age is:"<<u[i].getAge()<<endl;
        cout<<"The semester is:"<<u[i].getSemester()<<endl;
        cout<<"The fees is:"<<u[i].getFees()<<endl;
        cout<<"The stipend is:"<<u[i].getStipend()<<endl;
    }
    cout<<"The details of the PG Students are:"<<endl;
    for( int i=0;i<5;i++){
        cout<<"The name is:"<<p[i].getName()<<endl;
        cout<<"The USN is:"<<p[i].getUSN()<<endl;
        cout<<"The age is:"<<p[i].getAge()<<endl;
        cout<<"The semester is:"<<p[i].getSemester()<<endl;
        cout<<"The fees is:"<<p[i].getFees()<<endl;
        cout<<"The stipend is:"<<p[i].getStipend()<<endl;
    }
}