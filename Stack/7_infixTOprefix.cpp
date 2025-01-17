#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

int prec(char ch){
    if(ch=='^'){
        return 3;
    }
    else if(ch=='*' || ch=='/'){
        return 2;
    }
    else if(ch=='+' || ch=='-'){
        return 1;
    }
    else{
        return -1;
    }
}
string InfixToPrefix(string s){
    reverse(s.begin(),s.end());
    stack<char> st;
    string res;
    for(int i=0; i<s.length(); i++){
        if((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z')){
            res+=s[i];
        }
        else if(s[i]==')'){  //we have change '(' open bracket to === ')'closed bracket
            st.push(s[i]);
        }
        else if(s[i]=='('){  //we have change ')'closed bracketto === '(' open bracket
            while(!st.empty() && st.top()!=')'){ //we changed '(' open bracket to === ')'closed bracket
                res+=st.top();
                st.pop();
            }
            if(!st.empty()){
                st.pop();
            }
        }else{
            while(!st.empty() && prec(st.top())>=prec(s[i])){
                res+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        res+=st.top();
        st.pop();
    }
    reverse(res.begin(),res.end());
    return res;
}
int main(){
    cout<<"The Infix to Prefix Evaluation is : ";
    cout<<InfixToPrefix("(a-b/c)*(a/k-l)")<<endl; //output:: *-a/bc-/akl

}