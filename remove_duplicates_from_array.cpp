#include<iostream>
using namespace std;
// nive method
// int main(){
//     int arr[5]={1,2,2,4,5};
//     int temp[5];
//     temp[0]=arr[0];
//     int res=1;
//     for(int i=1;i<5;i++){
//         if(temp[res-1]!=arr[i]){
//             temp[res]=arr[i];
//             res++;
//         }
//     }
//     for(int i=0;i<res;i++){
//         cout<<temp[i];
//     }
//     return 0;
// }

int main(){

    int arr[]={1,2,2,4,5};
    int res=1;
    for(int i=0; i<5;i++){
        if(arr[res-1]!=arr[i]){
            arr[res]=arr[i];
            res++;

        }
    }
    for(int i=0;i<res;i++){
        cout<<arr[i];
    }

    return 0;
}