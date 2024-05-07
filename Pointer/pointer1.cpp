//access and modification of a pointer
#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int *p = &a;

    cout<<&a<<endl;//address of a pointer
    cout<<p<<endl;//address of a pointer
    cout<<*p<<endl;//value of a pointer

    *p = 30;
    cout<<a<<endl;  //updated value of a pointer
    cout<<&a<<endl;//same address of that pointer address will not updated
}