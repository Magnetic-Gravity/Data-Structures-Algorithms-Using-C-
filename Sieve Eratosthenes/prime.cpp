#include<iostream>
using namespace std;

void primeSieve(int n){
    int prime[100]={0};

    for(int i=2; i<=n; i++){
        if(prime[i]==0){ //initially all are unmarked 
            for(int j=i*i; j<=n; j+=i){
                prime[j]=1;//marked 
            }        
        }
    }
    for(int i=2; i<=n; i++){
        if(prime[i]==0){ //left out unmarked(y back gye inko print kar denge)
            cout<<i<<" ";
        }
    }
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    primeSieve(n);

    return 0;
}
