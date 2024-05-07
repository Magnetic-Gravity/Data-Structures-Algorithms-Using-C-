#include<iostream>
#include<stack>
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
string InfixToPostfix(string s){
    stack<char> st;
    string res;
    for(int i=0; i<s.length(); i++){
        if((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z')){
            res+=s[i];
        }
        else if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            while(!st.empty() && st.top()!='('){
                res+=st.top();
                st.pop();
            }
            if(!st.empty()){
                st.pop();
            }
        }else{
            while(!st.empty() && prec(st.top())>prec(s[i])){
                if (s[i] == '^' && st.top() != '^')
                    break;
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
    return res;
}
int main(){
    cout<<"The Infix to Postfix Evaluation is : ";
    //cout<<InfixToPostfix("(a-b/c)*(a/k-l)")<<endl; //output:: abc/-ak/l-*

}


/*
power(^) operator is right associative and other operators like ‘+’,’-‘,’*’ and ‘/’ are left associative.
Check especially for a condition when both top of the operator stack(st.top()) and scanned 
operator(s[i]) are power(^).In this condition the precedence of scanned operator is higher 
due to it’s right associativity.So it will be pushed in the operator stack. In all the other cases 
when the top of operator stack is same as scanned operator we will pop the operator from the stack
because of left associativity due to which the scanned operator has less precedence. 
*/