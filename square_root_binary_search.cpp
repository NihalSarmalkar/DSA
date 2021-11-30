#include<iostream>
using namespace std;

int binary(int x){
    int low=1;
    int high=x;
    int ans;
    while(low<=high){
        int mid=(low+high)/2;
        if((mid*mid)==x){
            return mid;
        }
        else if ((mid*mid)>x)
        {
            high=mid-1;
        }
        else{
            ans=mid;
            low=mid+1;

        }
        
    }

    return ans;

}

int main(){
    int x=19;
    int answer;
    answer=binary(x);
    cout<<answer;

    return 0;
}