#include<iostream>
using namespace std;

bool IsPowerOf2(int n)
{
    return (n && !(n & n-1));
}
int main()
{
    cout<<IsPowerOf2(16)<<endl; //this is power of 2 ,so output will be true or 1
     cout<<IsPowerOf2(14)<<endl;//Not the power of 2 ,so output will be false or 0
    return 0;
}