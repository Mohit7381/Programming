#include<iostream>
using namespace std;
class Employee{
    string name;
    string emp_id;
    char gender;
    public:
        Employee(){};
        void getEmployeInfo(){
            cout<<"Enter the name of the employee:"<<endl;
            getline(cin,name);
            cout<<"Enter the employee ID:"<<endl;
            getline(cin,emp_id);
            cout<<"Enter Gender (M-Male and F-Female)"<<endl;
            cin>>gender;
        }
        string getName(){
            return name;
        }
        string getEmpId(){
            return emp_id;
        }
        char getGender(){
            return gender;
        }
};
class Department:public Employee{
    string dept_name;
    string work_assigned;
    public:
        Department(){};
        void getDepartmentInfo(){
            cout<<"Enter the department name:"<<endl;
            getline(cin,dept_name);
            cin.ignore();
            cout<<"Enter the work assigned:"<<endl;
            getline(cin,work_assigned);
            cin.ignore();
        }
        string getDeptName(){
            return dept_name;
        }
        string getWorkAssigned(){
            return work_assigned;
        }
};
class Loan:public Employee{
    string loanDetails;
    int loanAmount;
    public:
        Loan(){};
        void getLoanInfo(){
            cout<<"Enter the loan details:"<<endl;
            cin.ignore();
            getline(cin,loanDetails);
            cout<<"Enter the loan amount:"<<endl;
            cin>>loanAmount;
        }
        string getLoanDetails(){
            return loanDetails;
        }
        int getLoanAmount(){
            return loanAmount;
        }
};
int main(){
    Department d;
    d.getEmployeInfo();
    d.getDepartmentInfo();
    cout<<"The employee details are:"<<endl;
    cout<<"Name: "<<d.getName()<<endl;
    cout<<"Employee ID: "<<d.getEmpId()<<endl;
    cout<<"Gender: "<<d.getGender()<<endl;
    cout<<"Department"<<d.getDeptName()<<endl;
    cout<<"Work Assigned: "<<d.getWorkAssigned()<<endl;
    Loan l;
    l.getEmployeInfo();
    l.getLoanInfo();
    cout<<"The employee details are:"<<endl;
    cout<<"Name: "<<l.getName()<<endl;
    cout<<"Employee ID: "<<l.getEmpId()<<endl;
    cout<<"Loan Details"<<l.getLoanDetails()<<endl;
    cout<<"Loan Amount: "<<l.getLoanAmount()<<endl;
    return 0;

}