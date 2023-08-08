#include <iostream>
#include <stdexcept> 
using namespace std;

class UGSTUDENT;
class PGSTUDENT;

class STUDENT
{
private:
  string USN;
  string name;
  int age;
public:
  int getAge(){ return age;}
  string getUSN(){ return USN;}
  string getName(){ return name;}
  void setAge(int a){ age=a;}
  void setUSN(string usn){ USN=usn;}
  void setName(string n){ name=n;}
  friend void getDetails(UGSTUDENT* ug, PGSTUDENT* pg,int size);
};

class UGSTUDENT: public STUDENT
{
public:
  int semNo;
  float fees;
  double stipend;
  friend void getDetails(UGSTUDENT* ug, PGSTUDENT* pg,int size);
  friend void printDetails(UGSTUDENT* ug, PGSTUDENT* pg,int size);
};

class PGSTUDENT: public STUDENT
{
public:
  int semNo;
  float fees;
  double stipend;
  friend void getDetails(UGSTUDENT* ug, PGSTUDENT* pg,int size);
  friend void printDetails(UGSTUDENT* ug, PGSTUDENT* pg,int size);
};

void getDetails(UGSTUDENT* ug, PGSTUDENT* pg,int size)
{
  string usn,name;
  int age,i;
  cout<<"Enter UG student details:"<<endl;
  
  try{
    for(i=0;i<size;i++)
    {
        try{
      cout<<"Enter the "<<i<< " USN"<<endl;
      cin.ignore();    // Ignore the newline character from previous input
      getline(cin,usn);
      if(usn.empty()){
          throw runtime_error("USN cannot be empty");
      }
      ug[i].setUSN(usn);
      cout<<"Enter the Name"<<endl;
      getline(cin,name);
      if(name.empty()){
          throw runtime_error("Name cannot be empty");
      }
      ug[i].setName(name);
      cout<<"Enter the Age"<<endl;
      cin>>age;
      if(age <= 0){
          throw runtime_error("Age must be a positive integer");
      }
      ug[i].setAge(age);
        }
        catch(const runtime_error &error){
            cout<<"Error: "<<error.what()<<" Please try again"<<endl;
            i--;
        }
    }
    if(i>size){
        throw runtime_error("Number of students cannot exceed 5");
    }
    }
  cout<<"Enter PG student details:"<<endl;
  try{
  for(i=0;i<size;i++)
    {
      cout<<"Enter the USN"<<endl;
      cin.ignore();    // Ignore the newline character from previous input
      getline(cin,usn);
      pg[i].setUSN(usn);
      cout<<"Enter the Name"<<endl;
      getline(cin,name);
      pg[i].setName(name);
      cout<<"Enter the Age"<<endl;
      cin>>age;
      pg[i].setAge(age);
    }
    if(i>size){
        throw runtime_error("Number of students cannot exceed 5");
    }

    catch(const runtime_error &error){
        cout<<"Error: "<<error.what()<<" Please try again"<<endl;
        i--;
    }
}

//This function is just to print details of students. Not necessary.
void printDetails(UGSTUDENT* ug, PGSTUDENT* pg,int size)
{
    int i;
    cout<<"UG student details: "<<endl;
    for(i=0;i<size;i++)
    {
        cout<<"Name: "<<ug[i].getName()<<endl;
        cout<<"USN: "<<ug[i].getUSN()<<endl;
        cout<<"Age: "<<ug[i].getAge()<<endl<<endl;
    }

     cout<<"PG student details: "<<endl;
    for(i=0;i<size;i++)
    {
        cout<<"Name: "<<pg[i].getName()<<endl;
        cout<<"USN: "<<pg[i].getUSN()<<endl;
        cout<<"Age: "<<pg[i].getAge()<<endl<<endl;
    }
}

int main()
{
  int i,size=5;
  UGSTUDENT ug[size];
  PGSTUDENT pg[size]; 
  getDetails(ug,pg,size);  
  printDetails(ug,pg,size);
  int ageSum=0;
  for(i=0;i<size;i++)
    ageSum+=ug[i].getAge();
  cout<<"Average age of all UG students is "<<ageSum/size<<endl;
  ageSum=0;
  for(i=0;i<size;i++)
    ageSum+=pg[i].getAge();
  cout<<"Average age of all PG students is "<<ageSum/size<<endl;
  return 0;
}