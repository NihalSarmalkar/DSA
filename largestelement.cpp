#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,7,3,4,5};
    int big=arr[1];

    for(int i=0;i<=5;i++)
    {
        if(arr[i]>big){
            big=arr[i];

        }
    
    }
    cout<<big;
    return 0;
}

