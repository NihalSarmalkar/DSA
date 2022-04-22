#include<iostream>
using namespace std;
int main(){

    int arr[9]={1,2,3,4,5,6,7,8,9};
    int temp[9]={0};
    for(int i=8;i>=0;i--){
        temp[9-i]=arr[i];
        
        
    }
    cout<<endl;
    for(int i=1;i<=9;i++){
        cout<<temp[i];

    }
    return 0;
}
