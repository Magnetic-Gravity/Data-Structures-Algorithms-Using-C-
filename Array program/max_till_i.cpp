#include<iostream>
using namespace std;

int main()
{
    int mx = -199999999;
    int n;
    cin>>n;

    int arr[n];
     
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
       cout<<endl;
       
        for (int i=0; i<n; i++)
        { 
          mx=max(mx,arr[i]);
          cout<< mx <<endl;
        }
        
    return 0;
    
}