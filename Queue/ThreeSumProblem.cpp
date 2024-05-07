#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"NO. of Elements: ";
    int n;
    cin>>n;
    cout<<"Target for checking : ";
    int target;
    cin>>target;

    vector<int>a(n);
    cout<<"\nElements from which we check : \n";
    for(auto &i: a)
        cin>>i;
    
    bool found=false;
    sort(a.begin(),a.end());  //step 1  //sort the elements 
    for(int i=0; i<n; i++){  // step 2  //iterate the elements 
        int low=i+1, high=n-1;
        while(low<high){               
            int current=a[i]+a[low]+a[high];
            if(current==target){
                found=true;
            }
            if(current<target){
                low++;
            }else{       //if(current>target)
                high--;
            }
        }
    }
    if(found)
        cout<<"\nit has target after adding three elements......True";
    else{
        cout<<"\nit is false";
    }

}