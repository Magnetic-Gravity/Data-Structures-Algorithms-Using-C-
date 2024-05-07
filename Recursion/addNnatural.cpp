#include<iostream>
using namespace std;

int addtilln(int n){
    if(n==0){
        return 0;
    }
    return n+addtilln(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<addtilln(n)<<endl;
    return 0;
}