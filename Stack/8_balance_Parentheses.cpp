#include<bits/stdc++.h>
using namespace std;

bool isValid(string s){
    int n=s.size();
    stack<char>st;
    bool ans=true; //starting m true maan liya humne

    for(int i=0; i<n; i++){
        if(s[i]=='{' || s[i]=='(' || s[i]=='['){
            st.push(s[i]);
        }
        else if(s[i]==')'){
             if(!st.empty() && st.top()=='('){
                 st.pop();
             }else{
                ans=false;
                break;
             }
        }
        else if(s[i]=='}'){
             if(!st.empty() && st.top()=='{'){
                 st.pop();
             }else{
                ans=false;
                break;
             }
        }
        else if(s[i]==']'){
             if(!st.empty() && st.top()=='['){
                 st.pop();
             }else{
                ans=false;
                break;
             }
        }
    }
    if(!st.empty())
        return false;   
    return ans;
}

int main(){
    string s="{([])}"; //output: It is a valid String 
    //string s="{([]})"; //output: This is an Invalid String
    if(isValid(s)){
        cout<<"It is a Valid String "<<endl;
    }else{
         cout<<"This is an Invalid String "<<endl;
    }
}