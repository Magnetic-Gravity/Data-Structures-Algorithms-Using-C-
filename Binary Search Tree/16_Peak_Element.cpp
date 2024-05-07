#include<iostream>
using namespace std;

int findPeakElement(int arr[],int low,int high,int n){
    int mid=(low+(high-low))/2;

    if((mid==0 || arr[mid-1] <= arr[mid]) && (mid==n-1 || arr[mid+1] <= arr[mid])){
        return mid;
    }
    else if(mid>0 && arr[mid-1] > arr[mid]){
        return findPeakElement(arr,mid+1,high,n);
    }
    else{
        return findPeakElement(arr,mid+1,high,n);
    }
}
int main(){
    int arr[]={10,16,18,15,7,9};
    int n=6; 
    cout<<"Peak Element index is : " << findPeakElement(arr,0,n-1,n) <<endl;

    return 0;
}