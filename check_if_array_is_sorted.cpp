// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,9,3,4,5};
//     for(int i=0;i<=5;i++){
//         for(int j=i+1;j<=5;j++)
//         {
//             if(arr[i]>arr[j])
//             {
//                 // return false 
                
//             }
                       
//         }

//     }
//     // return true;
//     return 0;
// }


// Efficient method

#include <iostream>
#include <cmath>
using namespace std;

bool isSorted(int arr[], int n)
{
	for(int i = 1; i < n; i++)
	{
	    if(arr[i] < arr[i - 1])
	        return false;
	}

	return true;
} 

    
int main() {
	
      int arr[] = {5, 12, 30, 2, 35}, n = 5;
      
      printf("%s", isSorted(arr, n)? "true": "false");
    
}