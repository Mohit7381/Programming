#include<iostream>
using namespace std;
void insrttionSort(int arr[],int size){
    int piviot,prev;
    for(int j=1;j<size;j++){
        piviot=arr[j];
        prev=j-1;
        while(prev>=0&&arr[prev]>piviot){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=piviot;
    }
}
void input(int arr[],int size){
    cout<<"Elements in Array"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
void display(int arr[],int size){
    cout<<"Elements in Array"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    input(arr,size);
    display(arr,size);
    insrttionSort(arr,size);
    display(arr,size);
    return 0;
}