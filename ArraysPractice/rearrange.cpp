
//Rearrange positive and negative numbers in O(n) time and O(1) extra space
#include<iostream>
using namespace std;

class arrange{
    public: 
     void rearrange(int[],int);
     void swap(int * ,int *) ;
     void printArray(int [],int);
};
void arrange:: rearrange(int arr[],int n){
    int i=-1;
    for(int j=0; j<n; j++){
        if(arr[j]<0){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    int pos=i+1, neg=0;
    while(pos<n && neg<pos && arr[neg]<0){
            swap(&arr[neg],&arr[pos]);
            pos++;
            neg+=2;
    }
}
void arrange :: swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void arrange:: printArray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={-1, 2, -3, 4, 5, 6, -7, 8, -9, 9};
    int n=sizeof(arr)/sizeof(arr[0]);
    arrange s; // object of class 
    s.rearrange(arr,n);
    s.printArray(arr,n);
     
    return 0;
}