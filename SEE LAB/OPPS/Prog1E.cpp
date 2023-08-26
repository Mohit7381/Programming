#include<iostream>
using namespace std;
int findOccurance(int arr[],int key,int size){
    int res=0;
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            res++;
        }
    }
    return res;
}
int main(){
    int size;
    cout<<"Enter the size of the array:"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key:"<<endl;
    cin>>key;
    cout<<"The number of times "<<key<<" occurs in the array is "<<findOccurance(arr,key,size)<<endl;
    return 0;
}