
//Method 3: using C++ STL
#include <bits/stdc++.h>
using namespace std;
void moveright(vector<int>& m){
    int count = 0;
    for (int i = 0; i < m.size(); i++) {
        if (m[i] == 0){
            count++;
            m.erase(m.begin() + i);
            i--;
        }
    }
    for (int i=0; i<count; i++) {
        m.push_back(0);
    }
    cout << "Shifting zeros to right side: ";
    for (int i=0; i<m.size(); i++) {
        cout<<m[i]<< " ";
    }
}
int main(){
    vector<int> m{ 5, 6, 0, 4, 6, 0, 9, 0, 8 };
    moveright(m);
    return 0;
}
  

/*
//Method 2: Partitioning the array
#include<bits/stdc++.h>
using namespace std;

int main(){
   int arr[]={1,9,8,4,0,0,2,7,0,6,0,9};
    int n=sizeof(arr)/sizeof(arr[0]);

    int j=0;
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            swap(arr[j],arr[i]);
            j++;
        }
    }
    
    for (int i=0; i<n; i++) {
        cout <<arr[i]<< " ";
    }
  
        return 0; 
}
/*
//program to push zeroes to back of array 
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void moveToend(vector<int>&arr){
    stable_partition(arr.begin(),arr.end(),[](int n){
        return n!=0;});
    }

int main(){
   vector<int>arr{1,9,8,4,0,0,2,7,0,6,0,9};
   moveToend(arr); 
   for(const auto& i:arr)
        cout<<i<<" ";
        return 0; 
}

*/