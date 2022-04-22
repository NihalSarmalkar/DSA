#include<iostream>
using namespace std;


int knapsack(int val[],int wt[],int w,int n){

    if(n==0||w==0){
        return 0;
    }

    if(wt[n-1]>w){
        return knapsack(val,wt,w,n-1);
    }
    else{
        return max(val[n-1]+knapsack(val,wt,w-wt[n-1],n-1),knapsack(val,wt,w,n-1));
    }
    
}
int main(){
    int val[]={10,40,30,50};
    int wt[]={5,4,6,3};
    int w=10;
    int n=4;
    cout<<"Ans = "<<knapsack(val,wt,w,n);
    return 0;
    
}