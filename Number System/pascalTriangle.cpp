#include<iostream>
using namespace std;

int fact(int n)
{
   int factorial=1;
    for(int i=2; i<=n; i++)
    {
       factorial*=i;   //factorial=factorial*i;
    }
    return factorial;
}
int main()
{
    int n;
    cin>>n;

    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}

/*output type:

1
1 1
1 2 1 
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1 
1 6 15 20 15 6 1 

*/