#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> dq;
    dq.push_front(3);  //3
    dq.push_front(2);  //2 3
    dq.push_back(9);   //2 3 9
    dq.push_back(10);  //2 3 9 10
    for(auto i: dq)
        cout<<i<<" ";  //2 3 9 10
    cout<<"\n";
    dq.pop_back();    // 2 3 9
    dq.pop_front();   //  3 9
    cout<<dq.size()<<"\n";  //size will be 2 
    //after pop the elements
    for(auto i: dq)
        cout<<i<<" ";  //  3 9 
    cout<<"\n";

}