#include<iostream>
#include<vector>
using namespace std;

void addEdge(vector<int> adj[],int u, int v){

    adj[u].push_back(v);
    adj[v].push_back(u);

}

void printAdjList(vector<int> adj[],int v){

    for(int i=0;i<v;i++){

        for(int k: adj[i]){
            cout<<k;
        }
        cout<<endl;
    }

}

void dfsrecursive(vector<int> adj[],bool visited[],int s){

    visited[s]=true;
    cout<< s<<" ";
    for(int k: adj[s]){
        if(visited[k]==false){
            dfsrecursive(adj,visited,kq);
        }
    }

}

void dfs(vector<int> adj[],int v,int s){


    bool visited[v];
    for(int i=0;i<v;i++){
        visited[i]=false;
    }
    dfsrecursive(adj,visited,s);


}




int main(){
    int v=5;
    vector<int> adj[v];
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,1,3);
    addEdge(adj,1,4);
    addEdge(adj,3,2);
    addEdge(adj,3,4);
    printAdjList(adj,v);
    dfs(adj,v,0);

    return 0;

}