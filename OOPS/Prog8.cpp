#include<iostream>
#include<string>
using namespace std;
class STUDENT{
        private:
        string USN;
        string Name;
        int Age;
        public:
        STUDENT() {}
        STUDENT(string usn,string name,int age): USN(usn),Name(name),Age(age){}

        int getAge(){
                return Age;
        }
};
class UGSTUDENT : public STUDENT{
        private:
                int Semester;
                double Fees;
        public:
                UGSTUDENT() {}
                UGSTUDENT(string usn,string name,int age,int sem,double fees):STUDENT(usn,name,age),Semester(sem),Fees(fees) {}

                int getSemester() {
                        return Semester;
                }
                double getFees() {
                        return Fees;
                }
};
class PGSTUDENT : public STUDENT {
        private:
                int Semester;
                double Fees;
                double Stipend;
        public:
                PGSTUDENT() {}
                PGSTUDENT(string usn,string name,int age,int sem,double fees,double stipend):STUDENT(usn,name,age),Semester(sem),Fees(fees),Stipend(stipend) {}

                int getSemester() {
                        return Semester;
                }
                double getFees() {
                        return Fees;
                }
};
int main(){
        UGSTUDENT UG[5];
        PGSTUDENT PG[5];
        cout<<"Enter the data for 5 UG Students: "<<endl;
        for(int i=0;i<5;i++){
                string usn,name;
                int age,sem;
                double fees;
                cout<<"Enter USN: ";
                cin>>usn;
                cout<<"Enter Name: ";
                cin.ignore();
                getline(cin,name);
                cout<<"Enter Age: ";
                cin>>age;

                /*taking sem as 1 and fees as 100000 for all ug students*/
                sem = 1;
                fees =  100000;

                UG[i] = UGSTUDENT (usn,name,age,sem,fees);
        }
        cout<<"Enter the data for 5 PG Students: "<<endl;
        for(int i=0;i<5;i++){
                string usn,name;
                int age,sem;
                double fees,stipend;
                cout<<"Enter USN: ";
                cin>>usn;
                cout<<"Enter Name: ";
                cin.ignore();
                getline(cin,name);
                cout<<"Enter Age: ";
                 cin>>age;

                sem = 1;
                fees = 200000;
                stipend = 80000;
                PG[i] = PGSTUDENT (usn,name,age,sem,fees,stipend);
        }
        int sumAgeUG = 0;
        for(int i=0;i<5;i++){
                sumAgeUG += UG[i].getAge();
        }
        float avgUG = sumAgeUG/5;
        int sumAgePG = 0;
        for(int i=0;i<5;i++){
                sumAgePG += PG[i].getAge();
        }
        float avgPG = sumAgePG/5;
        cout<<"Average Age of UG Students: "<<avgUG<<endl;
        cout<<"Average Age of PG Students: "<<avgPG<<endl;
        return 0;
}