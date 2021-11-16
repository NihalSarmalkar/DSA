#include<iostream>
using namespace std;

int sumdigit(int num)
{
    if(num==0){
        return 0;
    }
    return sumdigit(num/10)+num%10;
}


int main()
{
    int result;

    result=sumdigit(234);
    cout<<result;

    return 0;
}