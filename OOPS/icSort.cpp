#include<iostream>
using namespace std;
template<typename T>void sort(T arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                T temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
template<typename T>void print(T arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={212,31,3,1,2,1,312,3,12,1,21,22};
    double arr1[]={212.1,31.1,3.1,1.1,2.1,1.1,312.1,3.1,12.1,1.1,21.1,22.1};
    char arr2[]={'a','b','c','d','e','f','g','h','i','j','k','l'};
    sort(arr,12);
    print(arr,12);
    sort(arr1,12);
    print(arr1,12);
    sort(arr2,12); 
    print(arr2,12);  
}