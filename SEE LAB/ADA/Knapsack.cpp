#include<iostream>
using namespace std;
int knapSack(int numberOfObj,int maxWt,int WM[],int PM[]){
    int dp[numberOfObj+1][maxWt+1];
    for(int i=0;i<=numberOfObj;i++){
        for(int j =0;j<=maxWt;j++){
            if(i==0 || j== 0){
                dp[i][j]=0;
            }
            else if(WM[i-1]>j){
                dp[i][j]=dp[i-1][j];
            }
            else{
                dp[i][j]=max(dp[i-1][j],(dp[i-1][j-WM[i-1]]+PM[i-1]));
            }
        }
    }
    return dp[numberOfObj][maxWt];
}
int main(){
    int numberOfObj,maxWt;
    cout<<"Enter the number of objects and maximum weight:"<<endl;
    cin>>numberOfObj>>maxWt;
    int WM[numberOfObj],PM[numberOfObj];
    cout<<"Enter the weight matrix:"<<endl;
    WM[0]=-1;
    PM[0]=-1;
    for(int i=1;i<numberOfObj+1;i++){
        cin>>WM[i];
    }
    cout<<"Enter the profit matrix:"<<endl;
    for(int i=1;i<numberOfObj+1;i++){
        cin>>PM[i];
    }
    cout<<"The maximum profit is "<<knapSack(numberOfObj,maxWt,WM,PM)<<endl;
    return 0;
    
}