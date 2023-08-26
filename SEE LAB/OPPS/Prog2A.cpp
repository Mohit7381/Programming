#include<iostream>
using namespace std;
int convertToSeconda(int HH,int MM,int SS){
    return HH*3600+MM*60+SS;
}
int main(){
    int HH;
    int MM;
    int SS;
    cout<<"Enter the time in HH:MM:SS format:"<<endl;
    cin>>HH>>MM>>SS;
    cout<<"The time in seconds is:"<<convertToSeconda(HH,MM,SS)<<endl;
    return 0;
}