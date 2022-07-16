#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void addEdge(vector<int> adj[],int u, int v){

    adj[u].push_back(v);
    

}

void bfsTraversal(vector<int> adj[],int V,int S){
    bool visited[V];
    for(int i=0;i<V;i++){
        visited[i]=false;
    }
    queue<int> q;
    visited[S]=true;
    q.push(S);
    while(q.empty()==false){
        int u = q.front();
        
        cout<<u;
        q.pop();
        for(int k:adj[u]){
            if(visited[k]==false){
                q.push(k);
                visited[k]=true;
            }
        }
    }
 


}

void printAdj(vector<int> adj[],int V){

    for(int i=0;i<V;i++){

        for(int j:adj[i]){

            cout<<j;
        }
        cout<<endl;
    }

}

int main(){
    int V=7;
    vector<int> adj[V];
    addEdge(adj,0,1);
    addEdge(adj,0,3);
    addEdge(adj,1,2);
    addEdge(adj,1,4);
    addEdge(adj,2,5);
    addEdge(adj,2,6);
    addEdge(adj,3,4);
    addEdge(adj,4,0);
    addEdge(adj,5,1);
    addEdge(adj,5,4);

    bfsTraversal(adj,V,0);

    return 0;
}