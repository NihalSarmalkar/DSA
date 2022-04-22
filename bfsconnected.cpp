#include<iostream>
#include<vector>
#include <queue>
using namespace std;

void addEdge(vector<int> adj[],int u,int v){
    
    adj[u].push_back(v);
    adj[v].push_back(u);

}

void printlist(vector<int> adj[],int v){
    
    for(int i=0; i<v; i++){
        for(int k : adj[i])
        {
            cout<< k;
        }
        cout<<endl;
    }

}

void bfstraversal(vector<int> adj[],int v,int s){
    bool visited[v];
    for(int i=0;i<v;i++){
        visited[i]=false;
    }
    queue<int> q;
    q.push(s);
    visited[s]=true;
    while(q.empty()==false){
        int u = q.front();
        q.pop();
        cout<<u<<"-";
        for(int k : adj[u]){
            if(visited[k]==false){

                visited[k]=true;
                q.push(k);

            }
            
        }
    }
}

int main(){
    int v=5;
    vector<int> adj[v];
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,1,2);
    addEdge(adj,1,3);
    addEdge(adj,2,3);
    addEdge(adj,2,4);
    addEdge(adj,3,4);
    printlist(adj,v);
    bfstraversal(adj,v,0);



}
