//in this the number should be greater than the previous value and following value 
//then we will count how many value are there like this.
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n+1];
    arr[n] = -1;
     
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<endl;
    
    if(n == 1){
        cout<<"1"<<endl;
        return 0;
    }
    int ans = 0;
    int mx = -1;

    for(int i=0; i<n; i++){
        if(arr[i]>mx && arr[i]>arr[i+1])
        {
            ans++;
        }
        mx = max(mx,arr[i]);
    } 
        cout<< ans << endl;
    
    return 0;
    
}