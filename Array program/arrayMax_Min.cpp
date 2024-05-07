#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
     
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int maxNo =INT_MIN; 
    int minNo =INT_MAX;

    for (int i=0; i<n; i++)
    {
        if(arr[i]>maxNo){   //inn dono if loop ki jagah hum y waali condition bhi use kar sakte h 
            maxNo = arr[i];   //maxNo=max(maxNo,arr[i]);  //minNo=min(minNo,arr[i]);
        }                       
        if(arr[i]<minNo){   
            minNo = arr[i];
        }
    }
    cout<<maxNo<<" "<<minNo<<endl;
    return 0;
    
}