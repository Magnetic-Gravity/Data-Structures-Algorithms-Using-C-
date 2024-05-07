#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1="abc";
    string s2="abc";
    if(!s1.compare(s2))
    cout<<"Strings are Equal";

    return 0;
}

/*
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1="abc";
    string s2="abc";
    if(s1.compare(s2)== 0)
    cout<<"Strings are Equal"<<" ";
     cout<<s2.compare(s1)<<endl;

    return 0;
}

/*
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1="abc";
    string s2="abc";
    if(s1.compare(s2)== 0)
     cout<<s2.compare(s1)<<endl;

    return 0;
}

/*
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1="abc";
    string s2="abc";
     cout<<s1.compare(s2)<<endl;

    return 0;
}

/*
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1="abc";
    string s2="xyz";//xyz is always greater than abc
    //cout<<s1.compare(s2)<<endl;// s1 is small so output will be -15133239
    cout<<s2.compare(s1)<<endl;// s1 is small so output will be +15133239

    return 0;
}
*/