#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of vertices: ";
    cin>>n;
    int adj[n][n];
    cout<<"Enter the adjacency matrix: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>adj[i][j];
        }
    }
    int inDegree[n]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(adj[i][j]==1){
                inDegree[j]++;
            }
        }
    }
    int visited[n]={0};
    int count=0;
    while(count<n){
        for(int i=0;i<n;i++){
            if(inDegree[i]==0 && visited[i]==0){
                cout<<i<<" ";
                visited[i]=1;
                for(int j=0;j<n;j++){
                    if(adj[i][j]==1){
                        inDegree[j]--;
                    }
                }
            }
        }
        count++;
    }
    return 0;
}