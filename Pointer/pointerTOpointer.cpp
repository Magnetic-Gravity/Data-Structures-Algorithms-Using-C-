#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int *p;
    p = &a;
    cout<<*p<<endl;
    cout<<p<<endl;
//........................................
    int **q = &p;
    cout<<*q<<endl;  //will access the address 
    cout<<**q<<endl; // will access the value of a=10; becouse we did double referenced here
//or 
    int *r = p;
    cout<<*r<<endl;  // will access the value of a=10; becouse we did double referenced here
    cout<<r<<endl;  //will access the address 

//or
    int i=3;
    int *t=&i;
    *t=*t+1;
    cout<<*t<<endl;
    cout<<t<<endl; //0x7ffefe6bb944 something like that
    t=t+1;
    cout<<t<<endl;//address 4 byte se increase ho jaaega  ==0x7ffefe6bb948
                  

}