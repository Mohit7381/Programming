#include<iostream>
using  namespace std;
int partition(int arr[],int l,int r){
    int pivot=arr[l];
    int i=l-1;
    int j=r+1;
    while(i<j){
        do{
            i++;
        }while(arr[i]<=pivot);
        do{
            j--;
        }while(arr[j]>pivot);
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[l],arr[j]);
    return j;
}
void quickSort(int arr[],int l,int r){
        if(l<r){
            int pi=partition(arr,l,r);
            quickSort(arr,l,pi);
            quickSort(arr,pi+1,r);
        }
}

int main(){
    int arrSize;
    cout<<"Enter the size of the array: ";
    cin>>arrSize;
    int arr[arrSize];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<arrSize;i++){
        cin>>arr[i];
    }
    cout<<"The array before sorting: ";
    for(int i=0;i<arrSize;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quickSort(arr,0,arrSize-1);
    cout<<"The array after sorting: ";
    for(int i=0;i<arrSize;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;

}