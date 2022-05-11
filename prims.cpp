#include<iostream>
#include <limits.h>
#define V 4
using namespace std;
int primsFunction(int graph[V][V]){
	int result=0;
	int key[V];
	bool mst[V];
	for(int i=0;i<V;i++){
		key[i]=INT_MAX;
	}
	for(int i=0;i<V;i++){
		mst[i]=false;
	}
	key[0]=0;
	for(int count=0;count<V;count++){
		int u=-1;
		for(int i=0;i<V;i++){
			if(!mst[i]&&(u==-1||key[i]<key[u])){
				u=i;
			}
		}
		result=result+key[u];
		mst[u]=true;
		for(int k=0;k<V;k++){
			if(!mst[k]&&graph[u][k]!=0)
			{
				key[k]=min(key[k],graph[u][k]);
			}
		}


	}
	return result;


}


int main()
{

	int graph[V][V] = { { 0, 5, 8, 0}, 
						{ 5, 0, 10, 15 }, 
						{ 8, 10, 0, 20 }, 
						{ 0, 15, 20, 0 },};
	cout<< primsFunction(graph);
	

	
	return 0;
}