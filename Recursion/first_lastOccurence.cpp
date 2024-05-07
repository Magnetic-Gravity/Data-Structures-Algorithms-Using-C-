#include<iostream>
using namespace std;

int firstOcc(int arr[],int n, int idx,int element)
{
    if(idx==n){
        return -1;
    }
    if(arr[idx]==element){
      return idx;
    }
    return firstOcc(arr,n,idx+1,element);
}
int lastOcc(int arr[],int n, int idx,int element)
{
    if(idx==n){
        return -1;
    }
    int restArray=lastOcc(arr,n,idx+1,element);
    if(restArray != -1){
      return restArray;
    }
    if(arr[idx]==element){
      return idx;
    }
    return -1;
}
int main()
{
    int arr[]={3,4,2,5,6,2,2,1,5,7,3};
    
     cout<<firstOcc(arr,11,0,2)<<endl;//output: 2 position
     cout<<lastOcc(arr,11,0,2)<<endl;//output: 6 position

    return 0;
}