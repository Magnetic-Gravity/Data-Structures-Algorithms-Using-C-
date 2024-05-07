/*   Spiral order means that firstly first row is printed than last column is printed, than last row is 
printed and than first column is printed than we will come inwards in the similiar way.   */
#include<iostream>
using namespace std;
int main()
{   
    cout<<"The no. of rows and columns in n X m matrix is : \n";
    int n,m;
    cin>>n>>m;
       cout<<endl;
     
     cout<<"The inputs of the matrix is : \n";
     int a[n][m];      
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>a[i][j];
        }
    }
           cout<<endl;
     
     cout<<"Spiral order Matrix is: \n";
      int row_start = 0, row_end = n-1, column_start = 0, column_end = m-1;
      while(row_start <= row_end && column_start <= column_end)
      {
          //for row_start
          for(int col = column_start; col <= column_end; col++)
          {
              cout<< a[row_start][col] <<" ";
          }
          row_start++;

          //for column_end
          for(int row = row_start; row <= row_end; row++)
          {
              cout<< a[row][column_end] <<" ";
          }
          column_end--;
            //for row_end
           for(int col = column_end; col >= column_start; col--)
          {
              cout<< a[row_end][col] <<" ";
          }
          row_end--;

          //for column_start
          for(int row = row_end; row >= row_start; row--)
          {
              cout<< a[row][column_start] <<" ";
          }
          column_start++;

      }
        
    return 0;
}