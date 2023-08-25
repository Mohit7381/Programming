#include<iostream>
#include<climits>
using namespace std;    
#define size 4
void printMatrix(int graph[size][size]){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(graph[i][j]==9999){
                cout<<"INF\t";
            } else{
                cout<<graph[i][j]<<"\t";
            }
        }
        cout<<endl;
    }
    cout<<endl;
}
void FloydWarshalAlgo(int graph[size][size]){
    for(int k=0;k<size;k++){
        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){
                if(graph[i][j]>(graph[i][k]+graph[k][j]) && (graph[k][j]!=9999 && graph[i][k]!=9999)){
                    graph[i][j]=graph[i][k]+graph[k][j];
                }
            }
        }
    }
    printMatrix(graph);
}
int main(){
    int graph[size][size];
    cout<<"Enter the Adjancy matrix (in place of infinity write 9999):"<<endl;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cin>>graph[i][j];
        }
    }
    FloydWarshalAlgo(graph);

}