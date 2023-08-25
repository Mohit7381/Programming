#include<iostream>
#include<vector>
using namespace std;
int binomialCoffe(int n,int k){
    vector<vector<int>>C(n+1,vector<int>(k+1));
    for(int i=0;i<=n;i++){
        for(int j=0;j<=min(i,k);j++){
            if(j==0 || j==i){
                C[i][j]=1;
            } else{
                C[i][j]=C[i-1][j-1]+C[i-1][j];
            }
        }

    }
    return C[n][k];
}
int main(){
    int n,k;
    cout<<"Enter the value of n and k:"<<endl;
    cin>>n>>k;
    cout<<"The value of C("<<n<<","<<k<<") is "<<binomialCoffe(n,k)<<endl;
    return 0;
}