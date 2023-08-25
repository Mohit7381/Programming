#include<iostream>
using namespace std;
void merge(int arr[],int left ,int mid,int right){
    int n1=mid-left+1;
    int n2=right-mid;
    int Larr[n1];
    int Rarr[n2];
    for(int i=0;i<n1;i++){
        Larr[i]=arr[left+i];
    }
    for(int i=0;i<n2;i++){
        Rarr[i]=arr[mid+i+1];
    }
    int Lid=0;
    int Rid=0;
    int K=left;
    while(Lid<n1 && Rid<n2){
        if(Larr[Lid]<=Rarr[Rid]){
            arr[K]=Larr[Lid];
            Lid++;
        }
        else{
            arr[K]=Rarr[Rid];
            Rid++;
        }
        K++;
    }
    while(Lid<n1){
        arr[K]=Larr[Lid];
        Lid++;
        K++;
    }
    while(Rid<n2){
        arr[K]=Rarr[Rid];
        Rid++;
        K++;
    }
}
void mergeSort(int arr[],int left,int right){
        if(left<right){
            int mid=(left+right)/2;
            mergeSort(arr,left,mid);
            mergeSort(arr,mid+1,right);
            merge(arr,left,mid,right);
        }
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
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    mergeSort(arr,0,size-1);
    cout<<"The array after sorting: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}