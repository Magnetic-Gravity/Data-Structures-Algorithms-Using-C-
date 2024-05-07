#include<iostream>
using namespace std;
int main()
{
    char ch = 'a';
    char *p = &ch;
    cout<<p<<endl; //or we can write it as cout<<&a<<endl;

    p++;
    cout<<p<<endl; //size of char is 1 byte. So, Address  will be increased by 1 byte.  
}
/*
#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int *p = &a;
    cout<<p<<endl; //or we can write it as cout<<&a<<endl;

    p++;
    cout<<p<<endl; //size of int is 4 bytes. So, it will increased by 4 bytes.
}
//ouput will be: before==0x7fffc7d45034  After == 0x7fffc7d45038
*/