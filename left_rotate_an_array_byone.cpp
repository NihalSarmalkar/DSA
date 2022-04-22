#include<iostream>
using namespace std;
int main(){
    int n=8;
    int arr[n]={1,2,3,4,5,3,4,8};

    int temp=0;
    temp=arr[0];
    int res=0;
    for(int i=0;i<n-1;i++){
        arr[i]=arr[res+1];
        res++;
    }

    arr[res]=temp;



    for(int i=0;i<=res;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}