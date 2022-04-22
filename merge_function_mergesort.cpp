#include<iostream>
using namespace std;
void merge_sort_fun(int arr[]){



    int low=0,high=4,mid=2;
    int n1=mid-low+1;
    int n2=high-mid;
    cout<<"n1 - "<<n1<<"  n2 - "<<n2<<endl;
    int arr1[n1]={0},arr2[n2]={0};
    for(int i=0;i<n1;i++){
        arr1[i]=arr[i];

    }
    
    for(int i=0;i<n2;i++){
        arr2[i]=arr[i+n1];

    }


    int i=0,j=0,k=0;
    while(i<n1 && j<n2){
        if(arr1[i]<=arr2[j]){
            arr[k]=arr1[i];
            i++;
            k++;
        }
        else{
            arr[k]=arr2[j];
            j++;
            k++;
    
        }
    }
    while(i<n1){
        arr[k]=arr1[i];
        i++;
        k++;

    }
    while(j<n1){
        arr[k]=arr1[j];
        j++;
        k++;
        
    }
    for(int n=0;n<n1+n2;n++){
        cout<<arr[n];
    }



}

int main()
{
    int arr[]={10,20,40,20,30};
    merge_sort_fun(arr);
    return 0;

}