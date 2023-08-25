#include<iostream>
#include<climits>
using namespace std;
const int V=5;
int minWeight(int key[],bool mstSet[]){
    int min=INT_MAX,minID;
    for(int v=0;v<V;v++){
        if(mstSet[v]==false && key[v]<min){
            min=key[v];
            minID=v;
        }
    }
    return minID;
}
void primsMST(int graph[V][V]){
    int parent[V];
    int key[V];
    bool mstSet[V];
    for(int i=0;i<V;i++){
        key[i]=INT_MAX;
        mstSet[i]=false;
    }
    key[0]=0;
    parent[0]=-1;
    for(int count=0;count<V-1;count++){
        int u=minWeight(key,mstSet);
        mstSet[u]=true;
        for(int v=0;v<V;v++){
            if(graph[u][v] && mstSet[v]==false && graph[u][v]<key[v]){
                parent[v]=u;
                key[v]=graph[u][v];
            }
        }
    }
    // Final MST;
        cout<<"Edge\t"<<"Weight\n";
    for(int v=1;v<V;v++){
        cout<<parent[v]<<"-"<<v<<"\t"<<graph[v][parent[v]]<<"\n";
    }
    cout<<endl;
}
int main(){
    int graph[V][V]={{0,2,0,6,0},
                     {2,0,3,8,5},
                     {0,3,0,0,7},
                     {6,8,0,0,9},
                     {0,5,7,9,0}};
    primsMST(graph);
    return 0;
}