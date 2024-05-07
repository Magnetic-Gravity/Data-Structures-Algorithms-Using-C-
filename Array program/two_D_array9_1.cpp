#include<iostream>
using namespace std;
int main()
{   
    cout<<"The no. of rows and columns in n X m matrix is : \n";
    int n,m;
    cin>>n>>m;
       cout<<endl;
     
     cout<<"The inputs of the matrix is : \n";
     int arr[n][m];      
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }
           cout<<endl;
     
     cout<<"The Matrix is: \n";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}