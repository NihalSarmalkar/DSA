// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int arr[5]={3,4,5,6};
    
    int val = 5;
    int pos = 5;
    int index = pos - 1;
    int curr = 4;
    for(int i=curr - 1; i >= index; i-- ){
        arr[i+1]=arr[i];
        
    }
    arr[index]=val;
    for(int i=0;i<5;i++){
        cout<< arr[i]<<endl;
    }

    return 0;
}