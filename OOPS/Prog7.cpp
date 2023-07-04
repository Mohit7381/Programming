#include<iostream>
using namespace std;
class Employee{
    string name;
    string empID;
    string gender;
    public:
        void set_Name(){
            cout<<"Enter the Name :";
            cin>>name;
        }
        void set_empID(){
            cout<<"Enter the empId:";
            cin>>empID;
        }
        void set_gender(){
            cout<<"Enter the gender:";
            cin>>gender;
        }
        string get_Name(){return name;}
        string get_empId(){return empID;}
        string get_gender(){return gender;}
};
class Department:public Employee{
    string deptName;
    string workAssigned;
    public:
        void set_deptName(){
            cout<<"Enter Department Name:";
            cin>>deptName;
        }
        void set_workAssingned(){
            cout<<"Enter Work Assingned:";
            cin>>workAssigned;
        }
        string get_deptName(){return deptName;}
        string get_workAssigned(){return workAssigned;}
};
class Loan :public Employee{
    string loanDetails;
    double loanAmt;
    public:
        void set__loanDet(){
            cout<<"Enter Loan Details:";
            cin>>loanDetails;
        }
        void set_loanAmt(){
            cout<<"Enter Loan Amount:";
            cin>>loanAmt;
        }
        string get_loanDet(){return loanDetails;}
        double get_loanAmt(){return loanAmt;}
};
int main(){
    Department dept;
    Loan loan;
    dept.set_Name();
    dept.set_empID();
    dept.set_gender();
    cout<<"Enter Department Details";
    dept.set_deptName();
    dept.set_workAssingned();
    cout<<"Loan Details";
    loan.set__loanDet();
    loan.set_loanAmt();
    cout<< "Details You Enter:";
    loan.get_Name();
    loan.get_empId();
    loan.get_gender();
    loan.get_loanDet();
    loan.get_loanAmt();
    dept.get_deptName();
    dept.get_workAssigned();
    return 0;
}