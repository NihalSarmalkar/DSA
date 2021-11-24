#include<iostream>
using namespace std;

int bsearch(int arr[],int x,int low,int high){

    
    int mid;
    mid=(low+high)/2;
    if(low>high){
        return -1;

    }

    if (arr[mid]==x)
    {
        return mid;
        /* code */
    }
    else if (x<arr[mid])
    {
        /* code */
        high=mid-1;
        bsearch(arr,x,low,high);
    }
    else
    {
        low=mid+1;
        bsearch(arr,x,low,high);
    }
        
    return 0;
}
int main()
{
    int arr[5]={1,2,3,4,5};
    int find;
    int ans;
    int low=0;
    int high=4;
    cout<<"Enter the number to search : ";
    cin>>find;
    ans=bsearch(arr,find,low,high);
    cout<<ans;
    return 0;
}