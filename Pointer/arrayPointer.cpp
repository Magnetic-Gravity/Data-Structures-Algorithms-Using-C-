//we can't update the value of an array variable . we can only access the value of an array variable
#include<iostream>
using namespace std;
int main()
{
    int arr[] = {10,20,30,40,50};
    cout<<arr<<endl;   //same addres s
    cout<<*arr<<endl<<endl;

    cout<<&arr[0]<<endl; //same address s
    cout<<arr[0]<<endl<<endl;  //value
    
    for(int i=0; i<5; i++)
    {
        cout<<(arr+i)<<endl; //address
        cout<<*(arr+i)<<endl<<endl; //value stored
    }


    int i=3;
    cout<<i[arr];

    
  //or we can write it as   
  
/*  
     int *p = arr;
    for(int i=0; i<5; i++)
    {
        p++;
        cout<<*p<<endl;
    }*/
}