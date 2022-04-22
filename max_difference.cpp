#include<iostream>
using namespace std;
int main(){


    int arr[]={7,9,5,6,3,2};
    int count=0;

    for(int i=0;i<6;i++){
        int sub;
        for(int j=i+1;j<6;j++)
        {
            sub=arr[j]-arr[i];
            if(count<sub){
                count=sub;

            }
        }

    }
    cout<<count;
    return 0;
}