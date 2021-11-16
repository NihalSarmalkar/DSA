#include<iostream>
using namespace std;
int main()
{
    int arr[6]={1,7,3,4,5,6};
    int big=arr[1];

    for(int i=0;i<=6;i++)
    {
        if(arr[i]>big){
            big=arr[i];

        }
    
    }
    
    for(int i=0;i<=6;i++)
    {
        if(big!=arr[i]){
            big=arr[i];
            if(big<arr[i])
            {
                big=arr[i];
            }
        }
    }
    cout<<big;
    return 0;
}

