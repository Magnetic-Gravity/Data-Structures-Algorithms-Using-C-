#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,4,5,6};
    cout<<arr<<endl;//output: 0x7fff303eb470

    char ch[6]="abcde";  //it also contain a null character
    cout<<ch<<endl; //output:  abcde

    char *c=&ch[0];
    cout<<c<<endl;  //output:  abcde
   
    char temp='z';
    // cout<<temp<<endl; //output: c
    char *p=&temp;
    cout<<p<<endl; //   output:  zabcde
}