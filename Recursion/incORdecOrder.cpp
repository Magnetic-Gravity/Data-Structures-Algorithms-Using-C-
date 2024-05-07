#include<iostream>
using namespace std;

void dec(int n)
{
    if(n==0){
        cout<<"1"<<endl;
        return;
    }
    cout<<n<<endl;
    dec(n-1);
}
void inc(int n)
{
    if(n==0){
        cout<<"1"<<endl;
        return;
    }
    inc(n-1);
    cout<<n<<endl;
}
int main()
{
    int n;
    cin>>n;
    cout<<"Decresing order is"<<endl;
    dec(n);
    cout<<"incresing order is"<<endl;
    inc(n);    
    return 0;
}