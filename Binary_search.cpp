#include<iostream>
using namespace std;


int bsearch(int arr[],int x){
    int low=0;
    int high=5;
    int mid;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==x){
            return mid;
        }
        else if(arr[mid]<x){
            low=mid+1;
        }
        else{
            high=mid-1;
        }       
    }
    return -1;
}

int main(){

    int arr[5]={1,2,3,4,5};
    int answer;
    int find;
    cout<<"Enter the element to search : ";
    cin>>find;
    answer=bsearch(arr,find);
    cout<<"Position is : "<<answer;


    return 0;
}