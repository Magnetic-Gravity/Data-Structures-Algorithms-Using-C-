#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"the string is : ";
    string s;
    cin>>s;
    vector<int>dict(256,-1);
    int maxLen=0;
    int start=-1;
    
    for(int i=0; i<s.length(); i++){
        if(dict[s[i]]>start)
            start=dict[s[i]];

        dict[s[i]]=i;
        maxLen=max(maxLen,i-start);
    }
    cout<<"MaxLen is : "<<maxLen;
}