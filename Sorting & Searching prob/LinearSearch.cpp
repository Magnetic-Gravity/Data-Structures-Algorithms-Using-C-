#include<iostream>
#include<vector>
using namespace std;
void search(vector<int>arr,int e){   //e=element
  int l=0;             //l==left
  int n=arr.size();   //n=size or length
  int r=n-1;         //r==right 
  int p=-1;         //p=position
  for(l=0; l<=r;){
    if(arr[l]==e){
        p=l;
        cout<<"element is found at position " << p+1 <<" Position with left " << l+1 << " Atempt";
        break;
    }
    if(arr[r]==e){
        p=r;
        cout<<"element is found at position " << p+1 << " with left " << n-r << " Atempt";
        break;  
    }
      l++;
      r--;
  }
   if(p==-1){
    cout<<"element is not found in the array "<< l;
   }
}
int main(){
    vector<int>arr{20,39,56,10,34,67,89};
    arr.push_back(70);
    int e=70;
    search(arr,e);

    return 0;
}
/*
#include<iostream>
using namespace std;
int search(int arr[],int x,int n){
    for(int i=0; i<7; i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={20,39,56,10,34,67,89};
    int x=70;
    int n=sizeof(arr)/sizeof(arr[0]);//1 integers has 4 byte  (7 integers here  so )
    cout<<search(arr,x,7);

    return 0;
}
*/