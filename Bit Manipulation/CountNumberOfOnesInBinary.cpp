#include<iostream>
using namespace std;

int Number_of_Ones(int n)
{
    int count = 0;
    while(n)
    {
        n = n & n-1;
        count++;
    }
    return count;
}
int main()
{
    cout<<Number_of_Ones(19)<<endl;  //output is 3
     cout<<Number_of_Ones(16)<<endl;  //output is 1
       cout<<Number_of_Ones(14)<<endl;  //output is 3
          cout<<Number_of_Ones(9)<<endl;  //output is 2
    return 0;
}