//those names in which we can read behind or front they will always be same,for example : nitin=nitin
#include<iostream>
using namespace std;
int main()
{   
    cout<<"Enter the size of input: ";
    int n;
    cin>>n;
    cout<<"Enter the Word for checking: ";
    char arr[n+1];
    cin>>arr;

    bool check = 1;

    for(int i=0; i<n; i++)
    {
        if(arr[i] != arr[n-1-i])
        {
           check = 0;
           break;
        }
    }
         
    cout<<endl;    
    if(check == true)
    {
        cout<<"The word is a palindrome"<<endl;
    }
    else
    {
        cout<<"The word is not a palindrome"<<endl;
    }

    return 0;
}