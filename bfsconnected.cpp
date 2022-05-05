#include<iostream>
#include<vector>
#include <queue>
using namespace std;

void addEdge(vector<int> adj[],char u,char* v){
    
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

void bfstraversal(vector<int> adj[],int v,char* s){
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
    addEdge(adj,"A","D");
    addEdge(adj,"A","B");
    addEdge(adj,"B","c");
    addEdge(adj,"B","F");
    addEdge(adj,"C","E");
    addEdge(adj,"C","G");
    addEdge(adj,"G","E");
    addEdge(adj,"E","B");
    addEdge(adj,"E","F");
    addEdge(adj,"F","A");
    addEdge(adj,"D","F");
    printlist(adj,v);
    bfstraversal(adj,v,"A");



}
