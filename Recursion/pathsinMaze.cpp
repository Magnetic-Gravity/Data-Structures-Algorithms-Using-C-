//count number of paths possible in a maze of (n*n or n*m)
#include<iostream>
using namespace std;

int countpaths(int n,int i,int j)
{
  if(i==n-1 && j==n-1){
     return 1;
  }  
  if(i>=n || j>=n){
      return 0;
  }
   return countpaths(n,i+1,j)+countpaths(n,i,j+1);
}
int main()
{
    cout<<"The number of paths from start to end is: "<<countpaths(3,0,0);//output : 6
   return 0;
}