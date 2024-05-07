
//we will optimize this by using merge sort in count Inversion
 #include<iostream>
 using namespace std;
  
  long long merge(int arr[],int l,int mid,int r){
    long long inversion=0;
    int n1=mid-l+1;
    int n2=r-mid;  //int n2=r-(mid+1)+1;
    int a[n1]; int b[n2];
    for(int i=0; i<n1; i++){
        a[i]=arr[l+i];
    }
    for(int i=0; i<n2; i++){
        b[i]=arr[mid+1+i];
    }

    int i=0; int j=0; int k=l;//three pointer banakar unko initialize kar liya 
    while(i<n1 && j<n2){
        if(a[i]<=b[j]){
          arr[k]=a[i];
          k++; i++;
        }else{
            arr[k]=b[j];
            inversion+=n1-i;
            k++; j++;
        }
    }
    while(i<n1){
        arr[k]=a[i];
        k++;  i++;
    }
     while(i<n2){
        arr[k]=b[j];
        k++;  j++;
    }
    return inversion;
  } 
 long long mergesort(int arr[],int l, int r){
    long long inversion=0;
    if(l<r){
        int mid=(l+r)/2;
        inversion+=mergesort(arr,l,mid);
        inversion+=mergesort(arr,mid+1,r);
        inversion+=merge(arr,l,mid,r);
    }
    return inversion;
 }
 int main(){
    int n; cin>>n;
    int arr[n];  //{3 5 6 9 1 2 7 8}}
    cout<<endl;
      for(int i=0; i<n; i++){
         cin>>arr[i];
      }cout<<endl;
        cout<<mergesort(arr,0,n-1);
    return 0;
 }

                                        or//  
/*
//Not a good way to solve count inversion ,Time Complexity ::(N^2)
#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int arr[]={3,5,6,9,1,2,7,8};   
    int inv=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i]>arr[j] && i<j){
                 inv++;
            }
        }
    }
    cout<<inv;
    return 0;
}
/*                                    //or 
#include<iostream>
using namespace std;
int countinversion(int arr[],int n){
        
    int inversion=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i]>arr[j] && i<j){
                 inversion++;
            }
        }
    }
    return inversion;
}
int main(){
    int arr[]={3,5,6,9,1,2,7,8};
    cout<<countinversion(arr,8);
    return 0;
}
*/