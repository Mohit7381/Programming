#include<iostream>
using namespace std;
template<typename X>
void sorting(X arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(arr[i]>arr[j]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
}
int main(){
    int arr[]={10,21,21,22,3,0,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    sorting<int>(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    double arr1[]={10.1,2.1,2.21,1.22,3.1,0.12,1.11};
    size=sizeof(arr1)/sizeof(arr1[0]);
    sorting<double>(arr1,size);
    for(int i=0;i<size;i++){
        cout<<arr1[i]<<" ";
    }

}