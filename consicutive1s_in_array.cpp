// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n = 4;
    int count = 1;
    int res=0;
    int arr[n]={0,0,1,0};
    for(int i=0; i<n-1;i++){
        if(arr[i]==1){
            if(arr[i]==arr[i+1]){
                count+=1;
                if(i==n-2){
                    if(count>res){
                        res = count;
                    }
                    count = 1;
                }
                
            }
            else{
                if(count>res){
                        res = count;
                    }
                    count = 1;
                
                
            }
        }
    }
    if(arr[n-1]==1){
        if(res<1){
            cout<<1;
        }
    }
    cout<<"Output is - ";
    cout<<res;

    return 0;
}