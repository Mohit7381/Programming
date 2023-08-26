#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int choice;
    while(choice!=6){
        cout<<"1.Add an element to the vector"<<endl;
        cout<<"2.Delete an element from the vector at particular postion"<<endl;
        cout<<"3.Size of vector:"<<endl;
        cout<<"4.Inset element in the vector at particular position"<<endl;
        cout<<"5.Find Index of particular element in the vector"<<endl;
        cout<<"6.Exit"<<endl;
        cout<<"Enter your choice:"<<endl;
        cin>>choice;
        switch(choice){
            case 1: 
                int num;
                cout<<"Enter the number to be added:"<<endl;
                cin>>num;
                v.push_back(num);
                break;
            case 2:        
                int pos;
                cout<<"Enter the position of the element to be deleted:"<<endl;
                cin>>pos;
                v.erase(v.begin()+pos);
                break;
            case 3:
                if(v.empty()){
                    cout<<"The vector is empty"<<endl;
                }
                else{
                    cout<<"The size of the vector is : "<<v.size()<<endl;
                }
                break;
            case 4:
                int pos1;
                cout<<"Enter the position of the element to be inserted:"<<endl;
                cin>>pos1;
                int num1;
                cout<<"Enter the number to be inserted:"<<endl;
                cin>>num1;
                v.insert(v.begin()+pos1,num1);
                break;
            case 5:
                int num2;
                cout<<"Enter the number to be searched:"<<endl;
                cin>>num2;
                for(int i=0;i<v.size();i++){
                    if(v[i]==num2){
                        cout<<"The index of the element is : "<<i<<endl;
                        break;
                    }
                }
                break;
            case 6:
                cout<<"Exiting..."<<endl;
                return 0;
                break;
            default:
                cout<<"Invalid choice"<<endl;
                break;   
        }
    }

    return 0;
}