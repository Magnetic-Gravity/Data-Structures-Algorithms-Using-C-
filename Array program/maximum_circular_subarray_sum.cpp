// A subaarray is a contiguous part of an array.
//maximum circular subarray sum 
//max Subarray Sum = Total Sum of array - Sum of non-contributing elements
#include<iostream>
#include<climits>
using namespace std;

int kedane(int arr[], int n)
{
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
    return maxSum;
}

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

    int wrapsum;
    int nonwrapsum;

    nonwrapsum=kedane(arr,n); 
     int totalsum = 0;
    for(int i=0; i<n; i++)
    {
        totalsum += arr[i];
        arr[i] = -arr[i];
    }  
    
    wrapsum = totalsum+kedane(arr,n);

     cout<<max(wrapsum,nonwrapsum)<<endl;
    
    return 0;
}