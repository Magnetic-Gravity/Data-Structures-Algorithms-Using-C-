// A subaarray is a contiguous part of an array.
//time complexity = O(n^3) which is worst . so for a better approach we can use cumulatice sum approach.
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
     
     int maxSum=INT_MIN;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int sum=0;
            for(int k=i; k<=j; k++){
                //cout<<arr[k]<<" ";
                sum+=arr[k];
            }
            //cout<<" "<<endl;
            maxSum=max(maxSum,sum);
        }
    }
    cout<<"Sum of the maximum subarray: "<<maxSum<<endl;
    return 0;
}