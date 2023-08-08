#include <iostream>
using namespace std;
class Student
{
    string USN;
    string name;
    int age;

public:
    void getDetails()
    {
    }
    void displayDetails()
    {
    }
};
class UGStudent : public Student
{
    int sem;
    long long fees;
    int stipend;

public:
    void getDetails()
    {
        cout << "Enter USN: ";
        cin >> USN;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Semester: ";
        cin >> sem;
        cout << "Enter Fees: ";
        cin >> fees;
        cout << "Enter Stipend: ";
        cin >> stipend;
    }
    void displayDetails()
    {
        cout << "USN: " << USN << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Semester: " << sem << endl;
        cout << "Fees: " << fees << endl;
        cout << "Stipend: " << stipend << endl;
    }
};
class PGStudent : public Student
{
    int sem;
    long long fees;
    int stipend;

public:
    void getDetails()
    {
        cout << "Enter USN: ";
        cin >> USN;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Semester: ";
        cin >> sem;
        cout << "Enter Fees: ";
        cin >> fees;
        cout << "Enter Stipend: ";
        cin >> stipend;
    }
    void displayDetails()
    {
        cout << "USN: " << USN << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Semester: " << sem << endl;
        cout << "Fees: " << fees << endl;
        cout << "Stipend: " << stipend << endl;
    }
};
int main()
{
    Student *ptrUG=new UGStudent;
    Student *ptrPG=new PGStudent;

    for (int i = 0; i < 5; i++)
    {
        ptrUG = &ug;
        ptrUG->getDetails();
    }
    cout << "Enter UG Student Details: " << endl;
    ug.Student::getDetails();
    ug.getDetails();
    cout << "Enter PG Student Details: " << endl;
    pg.Student::getDetails();
    pg.getDetails();
    cout << "UG Student Details: " << endl;
    ug.Student::displayDetails();
    ug.displayDetails();
    cout << "PG Student Details: " << endl;
    pg.Student::displayDetails();
    pg.displayDetails();
    return 0;
}