#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if((i+j)%4==0 || i==2 && j%4==0)
            {
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}

//output:take input m=3 ,n=9 you will get a zig-zag line with stars