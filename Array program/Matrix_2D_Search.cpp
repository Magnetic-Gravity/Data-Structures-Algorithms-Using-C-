//integers in each row are sorted in ascending from left to right.
//integers in each column are sorted in ascending from top to bottom.
#include<iostream>
using namespace std;
int main()
{   
     
  cout<<"The no. of rows and columns in n X m matrix is : \n";
    int n,m;
    cin>>n>>m;
    cout<<"Enter the element to be searched: \n";
    int target; 
    cin>>target;
    cout<<endl;
     
    cout<<"The inputs of the matrix is : \n";
    int mat[n][m];      
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>mat[i][j];
        }
    }
    cout<<endl;

    int r=0, c=m-1;
    bool found =false;
    while (r<n and c>=0)
    {
        if(mat[r][c]==target)
        {
            found = true;
        }
        if(mat[r][c]>target)
        {
            c--;
        }
        else{
            r++;
        }
    }
     if(found)
     {
         cout<<"Element Found";
     }
     else{
         cout<<"Element does not exist";
     }
    return 0;
}