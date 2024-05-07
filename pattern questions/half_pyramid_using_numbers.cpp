#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
           // cout<<i<<j<<" "; if we take this line than,(input 4)= output: 11 \n 21 22 \n 31 32 33 \n 41 42 43 44
           cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}