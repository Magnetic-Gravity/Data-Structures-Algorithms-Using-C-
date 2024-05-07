#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter The Number: ";

    int n;
    cin>>n;
    int reverse=0;

    while (n>0)
    {
        int lastdigit=n%10;
        reverse =reverse * 10 +lastdigit ;
        n=n/10;
    }
    cout<<"Reverse of this Number is: "<<reverse<<endl;

    return 0;
}
