#include<iostream>
using namespace std;


int binary(int i,int arr[],int x){
    int low=1;
    int high=i;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x){
            return mid;
        }
        else if (arr[mid]>x)
        {
            high=mid-1;
        }
        else{
            low=mid+1;
        }
        
    }
    return -1;
    
    
}

int check(int x,int arr[]){
    int i=1;

    if(arr[0]==x){
        return 0;
    }
    while(arr[i]<x){
        i=i*2;
    }

    return binary(i,arr,x);

}


int main(){
    int x=100;
    int arr[]={10,20,30,40,50,60,70,80,90,100,120,130};
    int result;
    result=check(x,arr);
    cout<<result;
    return 0;
}