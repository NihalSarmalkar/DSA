#include<iostream>
using namespace std;


void bubble_sort(int arr[],int n){
    
    for(int k=0;k<n-1;k++){

        bool swapped=false;

        for(int i=0;i<n-1-k;i++){

            if(arr[i]>arr[i+1]){
                swapped=true;

                int temp=0;
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;

            }
         
        }
        if(swapped==false)
        {
            break;
        }
        cout<<k+1<<" th pass"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<""<<endl;

    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    int n=4;
    int arr[]={2,10,8,7};
    bubble_sort(arr,n);
    return 0;
}