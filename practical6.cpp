#include<bits/stdc++.h>
using namespace std;

#define v 4

void printSolution(int color[]);

bool isSafe(bool graph[v][v],int color[v]){
    for(int i=0;i<v;i++){
        for(int j=i+1;j<v;j++){
            if(graph[i][j] && color[j]==color[i]){
                return false;
            }
        }
    }
    return true;
}

bool graphColoring(bool graph[v][v],int m, int i, int color[v]){
    if(i==v){
        if(isSafe(graph,color)){
            printSolution(color);
            return true;
        }
        else{
            return false;
        }
    }
    for(int j=1;j<=m;j++){
        color[i]=j;

        if(graphColoring(graph,m,i+1,color)){
            return true;
        }

        color[i]=0;
    }

    return false;

    
}
void printSolution(int color[])
{
    cout << "Solution Exists:" " Following are the assigned colors \n";
    for (int i = 0; i < v; i++)
        cout << "  " << color[i];
    cout << "\n";
}


int main(){

  bool graph[v][v] = {
        { 0, 1, 1, 1 },
        { 1, 0, 1, 0 },
        { 1, 1, 0, 1 },
        { 1, 0, 1, 0 },
    };

    int m=3;
    int color[v];
    for(int i=0;i<v;i++){
        color[i]=0;
    }
    if(!graphColoring(graph,m,0,color))
    {
        cout<<"Solution does not exist";
    }
    return 0;
}