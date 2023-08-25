#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int edges,nodes;
vector<int>id;
void init(){
    for(int i=0;i<edges;i++){
        id[i]=i;
    }
}
// This to check that the node is making any cycle or not
int root(int x){
    while(id[x]!=x){
        id[x]=id[id[x]];
        x=id[x];
    }
    return x;
}
// to make note that node are visted
void union1(int x,int y){
    int p=root(x);
    int q=root(y);
    id[p]=id[q];
}
int kruskalMst(pair<int,pair<int,int>>p[]){
    int x,y;
    int cost,minCost=0;
    for(int i=0;i<edges;i++){
        x=p[i].second.first;
        y=p[i].second.second;
        cost=p[i].first;
        if(root(x)!=root(y)){
            minCost+=cost;
            union1(x,y);
        }
    }
    return minCost;
}
int main(){
    cout<<"Enter the number of nodes and edges";
    cin>>nodes>>edges;
    id.resize(edges);
    init();
    pair<int,pair<int,int>>p[edges];
    for(int i=0;i<edges;i++){
        int src,dest,weight;
        cout<<"Source :";
        cin>>src;
        cout<<"Destination :";
        cin>>dest;
        cout<<"Weight :";
        cin>>weight;
        p[i]=make_pair(weight,make_pair(src,dest));
    }
    sort(p,p+edges);
    int minCost=kruskalMst(p);
    cout<<"Minimum cost is "<<minCost<<endl;
    return 0;
}
