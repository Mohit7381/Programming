#include<iostream>
using namespace std;
int BinarySearch(int arr[],int start,int end,int key){
    int mid;
    if(start==end){
        if(arr[start]==key){
            return 1;
        }
        else{
            return 0;
        }
    }
    else{
        mid=(start+end)/2;
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]>key){
            return BinarySearch(arr,start,mid-1,key);
        }
        else{
            return BinarySearch(arr,mid+1,end,key);
        }
    }
    return 0;
}
int main(){
    int size;
    cout<<"Enter The Size of Array"<<endl;
    cin>>size;
    int arr[size];
    int i;
    cout<<"Enter the elements of Array"<<endl;
    for(i=0;i<size;i++){
        cin>>arr[i];
    }    
    int key;
    cout<<"Enter the Element To be Search"<<endl;
    cin>>key;
    
    
        cout<<"Element is found at:"<<BinarySearch(arr,0,size-1,key);
    
        
    return 0;
}
