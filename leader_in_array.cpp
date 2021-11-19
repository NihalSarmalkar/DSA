// My approach
// #include<iostream>
// using namespace std;
// int main()
// {
//  int n=7;
//  int arr[]={7,10,4,3,6,5,2};
 
//  for(int i=0;i<n;i++){
//      int count=0;
//      for(int j=i+1;j<n;j++)
//      {
//          if(arr[i]>arr[j]){
//              count++;
//          }
//          if(count==n-1 -i){
//              cout<<arr[i]<<endl;
//          }
        

//      }
//  }

//  return 0;

// }

#include <iostream>
#include <cmath>
using namespace std;


void leaders(int arr[], int n)
{
	int curr_ldr = arr[n - 1];

	cout<<curr_ldr<<" ";

	for(int i = n - 2; i >= 0; i--)
	{
		if(curr_ldr < arr[i])
		{
			curr_ldr = arr[i];

			cout<<curr_ldr<<" ";
		}
	}
}



int main() {
	
      int arr[] = {7, 10, 4, 10, 6, 5, 2}, n = 7;

      leaders(arr, n);
    
}