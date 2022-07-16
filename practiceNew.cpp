#include<iostream>
#include<bits/stdc++.h>
int v = 4;

bool graphColoring(bool graph[v][v],int m,int i,int color[]){
    if(i=v){
        if(isSafe(graph,color))
        {
            printSolution(color);
            return true;
        }
        else{
            return false;
        }
}
for(int j=i;j<=m;j++){
    color[i]=j;
    if(graphColoring(graph,m,i+1,color)){
        return true;
    }
    color[i]=0;
}
return false;
}

int main(){

    bool graph[v][v] = {
        { 0, 1, 1, 1 },
        { 1, 0, 1, 0 },
        { 1, 1, 0, 1 },
        { 1, 0, 1, 0 },
    };
    int m = 3;
    int color[v];
    for(int i=0;i<n;i++){
        color[i]=0;
    }
    if(!graphColoring(graph,m,0,color)){
        cout<<"No"
    }
    return 0;
}