
//given 2*n board and tiles of size 2*1, count the number of ways to tile given board using these tiles
#include<iostream>
using namespace std;

int tilingways(int n)
{
  if(n==0){
     return 0;
  }  
  if(n==1){
      return 1;
  }
  return tilingways(n-1)+tilingways(n-2);
}
int main()
{
    cout<<"The number of ways to place tiles is: "<<tilingways(4);//output : 3

   return 0;
}