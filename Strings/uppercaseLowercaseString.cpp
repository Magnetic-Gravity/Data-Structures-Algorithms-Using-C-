/*

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string s="abanklHKIaksWCVAllcnvbq";
    //convert into Upper Case
    transform(s.begin(), s.end(), s.begin(), ::toupper);     
    cout<<s<<endl;
    
     //convert into Lower Case
    transform(s.begin(), s.end(), s.begin(), ::tolower);     
    cout<<s<<endl;

    return 0;
}

/*
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string str="abanklHKIaksWCVAllcnvbq";
    //convert into upper case
    for(int i=0; i<str.size(); i++)
    {
       if(str[i] >= 'a' && str[i] <= 'z')
       str[i] -=32;
    }
    cout<<"Upper Case is: "<<str<<endl;

    //convert into Lower case
    for(int i=0; i<str.size(); i++)
    {
       if(str[i] >= 'A' && str[i] <= 'Z')
       str[i] +=32;
    }
    cout<<"Lower Case is: "<<str<<endl;

    return 0;
}

/*
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string s1="abanklHKIaksWCVAllcnvbq";
    cout<<'a'-'A'<<endl; //it means small 'a' capital 'A' se 32 aage h
    return 0;
}*/