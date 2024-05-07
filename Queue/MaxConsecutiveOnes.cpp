#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"size of vector array : ";
    int n;
    cin>>n;
    cout<<"zero we wanna convert into 1's : ";
    int k;
    cin>>k;
    
    vector<int>a(n);
    cout<<"\nElements of vector array in '0's and '1's form : \n";
    for(auto &i:a)
        cin>>i;
    int zero_Count=0; //initialization 
    int i=0;
    int ans=0;

    for(int j=0; j<n; j++){
        if(a[j]==0)
            zero_Count++;
        while(zero_Count > k){
            if(a[i]==0)
                zero_Count--;
                i++;
        }
        ans=max(ans,j-i+1);
    }    
  cout<<"\nThe Maximum Number of 1's is : ";
  cout<<ans;
}