//Method 1 
//check if there exists two elements in an array such that their sum is equal to given k
//time complexity is = O(n) it is better than the second method.
#include<iostream>
#include<climits>
using namespace std;

bool pairsum(int arr[], int n, int k)
{
   int low=0;
   int high=n-1;

   while(low<high)
   {
       if(arr[low]+arr[high]==k)
       {
          cout<<low<<" "<<high<<endl;
          return true;
       }
       else if(arr[low]+arr[high]>k)
       {
           high--;
       }
       else{
           low++;
       }
   }
   return false;
}

int main()
{
    int arr[] = {2,4,7,11,14,16,20,21};
    int k = 31;

    cout<<pairsum(arr,8,k)<<endl;
    
    return 0;
}

//Method 2
/* 
//time comlexity is O(n^2) 

#include<iostream>
#include<climits>
using namespace std;

bool pairsum(int arr[], int n, int k)
{
    for(int i=0; i<n; i++)
    {
      for(int j=i+1; j<n; j++)
      {
         if(arr[i]+arr[j]==k)
         {
             cout<<i<<" "<<j<<endl;
             return true;
         }
      }
    }
    return false;
}

int main()
{
    int arr[] = {2,4,7,11,14,16,20,21};
    int k = 31;

    cout<<pairsum(arr,8,k)<<endl;
    
    return 0;
}

*/