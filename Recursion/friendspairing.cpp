// ways in which n friends can remain single or can be paired up
#include<iostream>
using namespace std;

int friends(int n)
{
  if(n==0 || n==1 ||n==2){
     return n;
  }  
  return friends(n-1)+friends(n-2)*(n-1);  
}
int main()
{
    cout<<"no.of ways of single or paired: "<<friends(4);//output : 3

   return 0;
}
