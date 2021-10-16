#include<iostream>
using namespace std;


int sumdigits(int num){

    if(num<10){
        return num;
    }
    return sumdigits(num/10)+num%10;
}


int main(){

    int result;
    result=sumdigits(678);
    cout<<result;    
    return 0;
}