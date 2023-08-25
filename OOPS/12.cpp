12 a
#include <iostream>
using namespace std;
template <typename t> class calc{
        public:
                t add(t a, t b){
                        return a + b;
                }
                t sub(t a, t b){
                        return a - b;
                }
                t mul(t a, t b){
                        return a * b;
                }
                t div(t a, t b){
                        return a / b;
                }
};
int main(){
        calc<double> c;
        double a = 4.2, b = 1.3;
        cout<<"Add: "<<c.add(a,b)<<endl;
        cout<<"sub: "<<c.sub(a,b)<<endl;
        cout<<"mul: "<<c.mul(a,b)<<endl;
        cout<<"div: "<<c.div(a,b)<<endl;
        return 0;
}


12 b
#include <iostream>
using namespace std;
template <typename t> class stk{
        t arr[5];
        int size;
        int top;
                public:
                        stk():size(5),top(-1){};
                        void push(t num){
                                if(top == size - 1)
                                        cout<<"Stack overflow"<<endl;
                                else
                                        arr[++top] = num;
                        }
                        void pop(){
                                if(top == -1)
                                        cout<<"Stack Underflow"<<endl;
                                else
                                        top--;
                        }
                        t peek(){
                                if(top == -1){
                                        cout<<"Stack Underflow"<<endl;
                                        return -1;
                                }
                                return arr[top];
                        }
};
int main(){
        stk<double> st;
        st.push(2.2);
        st.push(1.3);
        cout<<"top "<<st.peek()<<endl;
        st.pop();
        cout<<"top "<<st.peek()<<endl;
        st.pop();
        st.pop();
        return 0;
}

13
#include<iostream>
#include<stdexcept>
using namespace std;
double readDoubleFromKeyboard(const string& prompt){
        cout<<prompt;
        double num;
        cin>>num;
        if(cin.fail())
                throw runtime_error("Invalid Input. Please enter a valid Double");
        return num;
}
double divideNumbers(double num1, double num2){
        if(num2 == 0)
                throw runtime_error("Division by Zero is not Allowed");
        return num1 / num2;
}
int main(){
        try{
                double num1 = readDoubleFromKeyboard("Enter Num 1: ");
                double num2 = readDoubleFromKeyboard("Enter Num 2: ");

                double result = divideNumbers(num1, num2);
                cout<<"Result is: "<<result<<endl;
        }
        catch(const exception& e){
                cerr<<"An Exception Occured: "<<e.what()<<endl;
        }
        return 0;
}


14a
#include<iostream>
#include<vector>
using namespace std;
int main(){
        vector<int> arr;
        arr.push_back(1);
        arr.push_back(2);
        arr.push_back(3);
        arr.push_back(4);
        arr.push_back(5);
        cout<<endl;
        cout<<"Size of Vector is: "<<arr.size()<<endl;
        cout<<"Vector is empty or not: "<<arr.empty()<<endl;
        int n;
        cout<<"Enter element to add to Vector"<<endl;
        cin>>n;
        arr.push_back(n);
        cout<<"Elements of Array after Addition: "<<endl;
        int i;
        for(i = 0; i < arr.size(); i++){
                cout<<arr[i]<<" ";
        }
        cout<<endl;
        cout<<"Deleting element 5 from Vector: "<<endl;
        arr.erase(arr.begin() + 4);
        cout<<"Elements of Array after Deletion: "<<endl;
        for(i = 0; i < arr.size(); i++){
                cout<<arr[i]<<" ";
        }
        cout<<endl;
        return 0;
}

14 b
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
        vector<int> arr;
        arr.push_back(3);
        arr.push_back(2);
        arr.push_back(1);
        arr.push_back(5);
        arr.push_back(4);
        int i;
        cout<<"Elements of Array before Sorting: "<<endl;
        for(i = 0; i < arr.size(); i++)
                cout<<arr[i]<<" ";
        cout<<endl;
        sort(arr.begin(), arr.end(), greater<int>());
        cout<<"Elements of Array after Sorting: "<<endl;
        for(i = 0; i < arr.size(); i++)
                cout<<arr[i]<<" ";
        cout<<endl;
        int num;
        cout<<"Enter number to find in Vector: "<<endl;
        cin>>num;
        for(i = 0; i < arr.size(); i++){
                if(arr[i] == num){
                        cout<<"Number found"<<endl;
                        return 0;
                }
        }
        cout<<"Number not Found"<<endl;
        return 0;
}