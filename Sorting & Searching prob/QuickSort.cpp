#include<iostream>
using namespace std;

void swap(int arr[],int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

int partition(int arr[],int l,int r){
    int pivot=arr[r];//use one here =r-1 or in main when calling quicksort(arr,0,r-1)
    int i=l-1;
    for(int j=l; j<r; j++){
        if(arr[j]<pivot){
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,r);
    return i+1;
}
void quicksort(int arr[], int l, int r){
    if(l<r){
        int pi=partition(arr,l,r);
        quicksort(arr,l,pi-1);
        quicksort(arr,pi+1,r);
    }
}

int main()
{
  int arr[]={6,3,9,5,2,8,7};
  quicksort(arr,0,6);
  for(int i=0;i<7; i++){
      cout<<arr[i]<<" ";
  }
  cout<<endl;
  return 0;
}