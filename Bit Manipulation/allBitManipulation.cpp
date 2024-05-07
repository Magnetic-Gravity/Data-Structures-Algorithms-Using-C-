#include<iostream>
using namespace std;
//getBit Manipulation
int getBit(int n, int pos)
{
    return ((n & (1<<pos))!=0);//if output is non-zero than print 1 otherwise print 0 
}
//setBit Manipulation
int setBit(int n, int pos)
{
    return (n | (1<<pos)); 
}
//clearBit Manipulation
int clearBit(int n, int pos)
{
    int mask = ~(1<<pos);
    return (n & mask);
}
//updateBit Manipulation
int updateBit(int n, int pos, int value)
{
    int mask = ~(1<<pos);
    n = n & mask;
    return (n | value<<pos);
}

int main()
{
    cout<<getBit(5,2)<<endl;   //output is 1
    cout<<setBit(5,1)<<endl;     //output is 7
    cout<<clearBit(5,2)<<endl;    //output is 1
    cout<<updateBit(5,1,1)<<endl;  //output is 7
     
    return 0;
}