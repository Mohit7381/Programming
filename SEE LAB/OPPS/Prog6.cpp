#include<iostream>
using namespace std;
class Stack{
    int arr[10];
    int top;
    public:
        Stack():top(-1){}
        void operator+(int num){
            if(top==9){
                cout<<"Stack Overflow"<<endl;
            }
            else{
                arr[++top]=num;
            }
        }
        void operator --(){
            if(top==-1){
                cout<<"Stack Underflow"<<endl;
            }
            else{
                cout<<"The popped element is "<<arr[top--]<<endl;
            }
        }
       friend ostream & operator<<(ostream &o,Stack &s){
            if(s.top==-1){
                o<<"Stack is empty"<<endl;
            }
            else{
                o<<"The elements of the stack are:"<<endl;
                for(int i=0;i<=s.top;i++){
                    o<<s.arr[i]<<endl;
                }
            }
        }
};
int main(){
    Stack s;
    int choice;
    do{
        cout<<"Enter 1 to push an element into the stack"<<endl;
        cout<<"Enter 2 to pop an element from the stack"<<endl;
        cout<<"Enter 3 to display the elements of the stack"<<endl;
        cout<<"Enter 4 to exit"<<endl;
        cin>>choice;
        switch(choice){
            case 1:{
                int num;
                cout<<"Enter the number to be pushed:"<<endl;
                cin>>num;
                s+num;
                break;
            }
            case 2:{
                --s;
                break;
            }
            case 3:{
                cout<<s;
                break;
            }
            case 4:{
                cout<<"Exiting..."<<endl;
                break;
            }
            default:{
                cout<<"Invalid choice"<<endl;
                break;
            }
        }
    }while(choice!=4);
    return 0;
}