#include<iostream>
using namespace std;

bool sortedArray(int arr[],int idx)
{
  if(idx==1){ //if it contains only one elements
      return true;
  }   
   if(arr[idx]<arr[idx+1]){ 
      return sortedArray(arr,idx+1);
   }else{
     return false;
   }
}
int main()
{
     //int arr[]={1,2,3,4,5};//output 1
     int arr[]={1,2,2,4,9};//output 0 this is not a strictly increasing function
    cout<<sortedArray(arr,0)<<endl;
    return 0;
}
//outp
/*
#include<iostream>
using namespace std;

int sortedArray(int arr[],int n)
{
    if(n==1){
        return true;
    }
    bool restArray=sortedArray(arr+1,n-1);
    return (arr[0]<arr[1] && restArray);
}
int main()
{
     //int arr[]={1,2,3,4,5};//output 1
     int arr[]={1,2,2,4,9};//output 0 this is not a strictly increasing function
    cout<<sortedArray(arr,5)<<endl;
    return 0;
}
//output is a boolean value: if 1== true && if 0==false
*/