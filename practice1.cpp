#include<iostream>
#include<vector>
using namespace std;

void addEdge(vector<int> adj[],int u,int v){

    adj[u].push_back(v);
    adj[v].push_back(u);

}

void printAdj(vector<int> adj[],int V){
    for(int i=0;i<V;i++){
        for(int k:adj[i]){
            cout<<k;
        }
        cout<<endl;
    }

}

void recDFS(vector<int> adj[],int s,bool visited[]){
    visited[s]=true;
    cout<<s;
 
    for(int k:adj[s]){
        if(visited[k]==false){
            recDFS(adj,k,visited);
        }
    }


}

void calculateDFS(vector<int> adj[],int V,int S){
    bool visited[V];
    for(int i=0;i<V;i++){
        visited[i]=false;
    }
    recDFS(adj,S,visited);

}


int main(){

    int V=5;
    vector<int> adj[V];
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,1,3);
    addEdge(adj,1,4);
    addEdge(adj,2,3);
    addEdge(adj,3,4);
    printAdj(adj,V);
    calculateDFS(adj,V,0);
  
    return 0;
}