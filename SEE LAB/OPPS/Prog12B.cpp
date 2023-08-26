#include<iostream>
using namespace std;
template<typename T,int size>class Stack{
        T arr[size];
        int top;
        public:
        Stack(){
            top=-1;
        }
        void push(T data){
            if(top==size-1){
                cout<<"Stack Overflow"<<endl;
            }
            else{
                top++;
                arr[top]=data;
            }
        }
        void pop(){
            if(top==-1){
                cout<<"Stack Underflow"<<endl;
            }
            else{
                cout<<"The popped element is "<<arr[top]<<endl;
                top--;
            }
        }
        void peek(){
            if(top==-1){
                cout<<"Stack is empty"<<endl;
            }
            else{
                cout<<"The top element is "<<arr[top]<<endl;
            }
        }
};
int main(){
    Stack<int,10> s;
    int choice;
    do{
        cout<<"Enter 1 to push an element into the stack"<<endl;
        cout<<"Enter 2 to pop an element from the stack"<<endl;
        cout<<"Enter 3 to display the top element of the stack"<<endl;
        cout<<"Enter 4 to exit"<<endl;
        cin>>choice;
        switch(choice){
            case 1:{
                int num;
                cout<<"Enter the number to be pushed:"<<endl;
                cin>>num;
                s.push(num);
                break;
            }
            case 2:{
                s.pop();
                break;
            }
            case 3:{
                s.peek();
                break;
            }
            case 4:{
                cout<<"Exiting..."<<endl;
                break;
            }
            default:{
                cout<<"Invalid choice"<<endl;
            }
        }
    }while(choice!=4);
    return 0;
}