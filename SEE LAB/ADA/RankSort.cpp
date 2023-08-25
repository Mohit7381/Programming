#include<iostream>
using namespace std;
 
 void ranksort(int arr[],int size){
    int rankedArray[size];
    int rankarr[size];
    for(int i=0;i<size;i++){
        rankedArray[i]=0;
        rankarr[i]=0;
    }
    for(int i=0;i<size;i++){
        for(int j=0;j<i;j++){
            if(arr[i]>arr[j]){
                rankedArray[i]++;
            }
            else{
                rankedArray[j]++;
            }
        }
    }
    for(int i=0;i<size;i++){
        rankarr[rankedArray[i]]=arr[i];
    }
    for(int i=0;i<size;i++){
        arr[i]=rankarr[i];
    }
 }
 void prinArray(int arr[],int size){
    for(int i=0l;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
 }
 int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"The array before sorting: ";
    prinArray(arr,size);
    ranksort(arr,size);
    cout<<"The array after sorting: ";
    prinArray(arr,size);
    return 0;
 }