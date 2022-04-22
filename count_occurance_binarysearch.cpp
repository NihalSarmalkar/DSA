#include<iostream>
using namespace std;

int occur(int arr[],int found){
    int high=8;
    int low=0;
    int mid;


    while(low<=high){
        mid=(high+low)/2;
        cout<<mid<<endl;
        if(arr[mid]==found){

            // return mid;

            if(arr[mid]==arr[mid-1]){
                return mid-1;
            }
            else{
                return mid;

            }

        }
        else if (arr[mid]<found)
        {

            low=mid+1;

        }
        else{

            high=mid-1;

        }
        
    }
    return 0;
}
int main(){

    int arr[]={10,20,30,30,30,30,30,40,40};
    int found=30;
    int result;
    result=occur(arr,found);
    cout<<"Result : "<<result;


    return 0;

}