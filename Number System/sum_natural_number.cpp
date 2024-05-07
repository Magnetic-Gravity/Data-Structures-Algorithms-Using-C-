#include<iostream>
using namespace std;

int sum(int n)
{
    int natural=0;
    for(int i=1; i<=n; i++)
        natural+=i;
        return natural;
}

int main()
{
    int n;
    cin>>n;

     cout<<sum(n);  

    return 0;
}