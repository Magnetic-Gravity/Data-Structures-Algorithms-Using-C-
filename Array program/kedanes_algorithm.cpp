// A subaarray is a contiguous part of an array.
//maximum subarray sum 
//we updated negative values with zero, than in the last we will see the maximum value 
#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cin>>n;
        cout<<endl;
    int arr[n];
     
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
 
      cout<<endl;

     int currentSum = 0;
     int maxSum = INT_MIN; 

    for(int i=0; i<n; i++)
    {
        currentSum+=arr[i];
        
        if(currentSum<0)
        {
            currentSum = 0;
        }
        maxSum=max(maxSum,currentSum);
    }
     cout<<maxSum<<endl;
    
    return 0;
}