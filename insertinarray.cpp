#include<iostream>
using namespace std;

int insert(int arr[],int n, int x, int cap, int pos)
{
    if(cap==n){
        return n;

    }

    int idex=pos-1;
    for(int i = n - 1; i >= idex; i--)
	{
		arr[i + 1] = arr[i];
	}

    arr[idex]=x;
    return n+1;

}


int main(){
    int arr[5];
    int cap=5,n=3;
    arr[0]=5,arr[1]=4,arr[2]=6;
    cout<<"Before insertion"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    int x=3,pos=2;
    n=insert(arr,n,x,cap,pos);
    cout<<"After insertion : "<<endl;
    for(int i=0; i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    


}