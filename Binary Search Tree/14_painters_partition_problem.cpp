#include<iostream>
using namespace std;

int findFeasible(int boards[],int n,int limit){
    int painters = 1,sum=0;
    for(int i=0; i<n; i++){
         sum+=boards[i];
         if(sum > limit){
            sum = boards[i];
            painters++;
         }
    }
    return painters;
}
int paintersPartition(int boards[],int n,int m){
    // n == length of diff. boards    //  m == painters available
    int totalLength=0, k=0;

    for(int i=0; i<n; i++){
        k=max(k,boards[i]);
       totalLength+=boards[i];
    }
    int low=k; 
    int  high=totalLength; 
    
    while(low < high){
        int mid=(low+high)/2;
        int painters=findFeasible(boards,n,mid);
        if(painters <= m){
            high=mid;
        }else{
          low=mid+1;
        }
    }
    return low;
}
int main(){
    int boards[]={10,20,30,40};
    int n=4;
    int m=2;
    cout<<"The minimum time to paint the boards : "<<paintersPartition(boards,n,m);
    cout<<endl;        // output : 60
    return 0;
}