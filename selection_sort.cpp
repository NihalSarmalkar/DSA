#include<iostream>
using namespace std;

void insertion_sort(int arr[],int n){
    for(int i=0;i<n;i++){

        int min_index=i;

        for(int j=i+1;j<n;j++){

            if(arr[j]<arr[min_index])
            {
                min_index=j;
            }

        }

        int temp=0;
        temp=arr[i];
        arr[i]=arr[min_index];
        arr[min_index]=temp;

    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


}

int main(){
    int n=6;
    int arr[]={2,1,3,4,7,5};
    insertion_sort(arr,n);
    return 0;

}
