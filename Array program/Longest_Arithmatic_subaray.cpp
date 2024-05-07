//An Arithmatic array is an array that contains atleat two integers and
//the diffenrences between consecutive intergers are equal.[9,10],[3,3,3],[9,7,5,3]are arithmatic arrays
//but [1,3,3,7],[2,1,2],[1,2,4]are not Arithmatic arrays.
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
     
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<endl;

      int ans = 2;
      int pd = arr[1]-arr[0];
      int j = 2;    
      int current = 2;
         while(j<n)
         {
             if(pd == arr[j]-arr[j-1]){
                 current++;
             }else{
                 pd = arr[j]-arr[j-1];
                 current = 2;
             }
             ans =max(ans,current);
            j++;
         }

     cout<< ans << endl;
        
    return 0;
}