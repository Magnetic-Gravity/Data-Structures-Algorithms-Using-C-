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
        cout<<"Input the element that we want to find:   ";
        int x;
        cin>>x;
        cout<<endl;
        bool flag =false;
        for(int i=0; i<n; i++)
        {
           for(int j=0; j<m; j++)
           {   
                if(arr[i][j]==x)
                {
                    cout<<"Position of the element that we are searching in the matrix:  ";
                   cout<<i<<" "<<j<<endl;
                   flag=true;
                }
           }
        }
        cout<<endl;
      if(flag)
      {
          cout<<"Element is found"<<endl;
      }
      else
      {
           cout<<"Element is not found"<<endl; 
      }

    
    return 0;
}