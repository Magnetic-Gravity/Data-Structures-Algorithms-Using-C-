#include<iostream>
using namespace std;
void fun1()        //fun1 will be called second
{
    //function body
}
void fun2()         // will be called third
{
    //function body
}
void fun3()          // will be called fourth
{
    //function body
}
void fun4()            //will be called fifth
{
    //function body
}
int main()          //main will be called first 
{
    fun1();
    fun2();
    fun3();
    fun4();

    return 0;
}