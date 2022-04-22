#include<iostream>
using namespace std;
int main(){
    int arr[]={1,0,0,4,5};
    for(int i=0;i<5;i++){
        if(arr[i]==0)
        {
            for(int j=i+1;j<5;j++){
                if(arr[j]!=0){
                    int temp;
                    temp=arr[j];
                    arr[j]=arr[i];
                    arr[i]=temp;
                }

            }
        }
    }
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }


    return 0;
}