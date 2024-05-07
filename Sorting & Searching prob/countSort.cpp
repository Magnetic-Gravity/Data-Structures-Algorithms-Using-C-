#include<iostream>
using namespace std;

void countSort(int arr[],int n){
    int k=arr[0];
    
    for(int i=0; i<n; i++){  //Loop == finding max element in given array 
        k=max(k,arr[i]);
    }

    int count[10]={0}; // becouse array ko dynmacally allocate ni kar sakte 
    for(int i=0; i<n; i++){//Loop== counting k liye kon element kitni baar aa rha h
       count[arr[i]]++;
    }

    for(int i=1; i<=k; i++){//Loop== count array ko modify karne k liye 
        count[i]+=count[i-1];//also y index position bhi bataega
    }

    int output[n];
    for(int i=n-1; i>=0; i--){  //isme output array ko store kar lenge  jo sorted value dega humein 
        output[--count[arr[i]]]=arr[i];// sorted values with index 
    }
     
    for(int i=0; i<n; i++){ //original array :: finally isme output[i] array ko daal denge
        arr[i]=output[i];
    } 
     
}
int main(){
    int arr[]={1,3,2,3,4,1,6,4,3,7,6,7,8,2,3};
    countSort(arr,15);
    for(int i=0; i<15; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}