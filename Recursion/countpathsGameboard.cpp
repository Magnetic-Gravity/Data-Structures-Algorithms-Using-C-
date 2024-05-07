//count number of paths from start to end in gameboard?
#include<iostream>
using namespace std;

int countpaths(int s,int e)
{
  if(s>e){
      return 0;
  }
  if(s==e)
  {
      return 1;
  }
  int count=0;
  for(int i=1; i<=6; i++){
      count+=countpaths(s+i,e);
  }
  return count;
}
int main()
{
    cout<<"The number of paths from start to end is: "<<countpaths(0,3);
   return 0;
}