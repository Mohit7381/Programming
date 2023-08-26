#include<iostream>
using namespace std;
template<typename T>
void sort(T arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            if(arr[i]>arr[j]){
                T temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
template<typename T>
T search(T arr[],int size,T key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
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
    sort<int>(arr,size);
    cout<<"The sorted array is:"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"The index of the key is:"<<search<int>(arr,size,key)<<endl;
    return 0;
}