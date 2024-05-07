#include<iostream>
using namespace std;
int main()
{
    for (int date = 1; date<=30; date++)
    {
        int pocketMoney=3000;
        if(date%2==0)
        {
            continue;
        }
        if(pocketMoney==0)
        {
            break;
        }
           cout<<"Go out Today"<<endl;
         pocketMoney=pocketMoney-300;
  }
  return 0;
}