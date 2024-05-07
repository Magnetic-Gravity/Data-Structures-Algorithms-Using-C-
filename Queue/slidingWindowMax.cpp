/*
//Approach 1:: Sliding Window Maximum using Multiset 
//Time Complexity= n*log(n)
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cout<<"The number of elements n are : ";
    cin>>n;
    cout<<"The number of windows of k is : ";
    cin>>k;
    cout<<"The elements of vector array  is : \n";
    vector<int>a(n);
    for(auto &i: a)
        cin>>i;

    multiset<int,greater<int>>s; //it will store the greatest element on top
    vector<int>ans;  //will store result here one by one 
    for(int i=0; i<k; i++){
        s.insert(a[i]);  //all elements inserted here in decreasing order (example: 3 2 1...)
    }
    ans.push_back(*s.begin()); //we wil push_back the first elment of multiset in vector<int>ans; 

    for(int i=k; i<n; i++){
        s.erase(s.lower_bound(a[i-k])); //lower bound will erase the first element from vector array 
        //given 7 -4 8 3 6 -3 -9 && let k=3 which means(7 -4 8) delete 7 it is the lower bound here
        //again k=3 which means(-4 8 3) delete -4 it is lower bound here and so on 
          
        s.insert(a[i]); //next 3 are:  -4 8 3 after insert in multiset=(8 3 -4) and so on.
        ans.push_back(*s.begin()); //max from last is 8 and push it in vector<int>ans;
        //now repeat again & again the process till i<n;
    }
    cout<<"The elements of sliding Window Maximum is : ";
    for(auto i: ans)
        cout<<i<<" ";
}
*/
//Approach 2:: Sliding Window Maximum by using Deque 
//Time Complexity= O(n) optimization 
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cout<<"The number of elements n are : ";
    cin>>n;
    cout<<"The number of windows of k is : ";
    cin>>k;
    cout<<"The elements of vector array  is : \n";
    vector<int>a(n);
    for(auto &i: a)
        cin>>i;

    deque<int>q; //elements will be in non-increasing order
    vector<int>ans;
    for(int i=0; i<k; i++){
        while(!q.empty() && a[q.back()]<a[i]){ //q should be empty and last left index will be result
            q.pop_back();
        }
        q.push_back(i);  //this is index of that value 
    }
    ans.push_back(a[q.front()]); //this is the number of that index value i
    
    for(int i=k; i<n; i++){ //for rest of the elements 
        if(q.front()==i-k){  //suppose i=3 & k=3 then i-k==0 and so on;
             q.pop_front(); //1st(zeroth position) element will be deleted and so on;
        }
            while(!q.empty() && a[q.back()]<a[i]){ //q should be empty and last left index will be result
                q.pop_back();
            }
            q.push_back(i);
      ans.push_back(a[q.front()]);  
    }

    cout<<"The elements of sliding Window Maximum is : ";
    for(auto i: ans)
        cout<<i<<" ";
}
