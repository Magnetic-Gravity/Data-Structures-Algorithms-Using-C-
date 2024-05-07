#include<iostream>
#include<stack>
#include<math.h>
using namespace std;

int postfixEvaluation(string s){
    stack<int>st;
    for(int i=0; i<s.length();  i++){
       if(s[i]>='0' && s[i]<='9'){   //if it is an Operand
            st.push(s[i]-'0');   
    //s[i] character hai isko integer banaane k liye '0' ki ASCII value ko isme se subtract kar denge           
       }
       else{    //if it is an operator
            int op2=st.top();
            st.pop();
            int op1=st.top();
            st.pop();

            switch(s[i]){
                case '+' :
                    st.push(op1+op2);
                    break;
                case '-' :
                    st.push(op1-op2);
                    break;
                case '*' :
                   st.push(op1*op2);
                   break;
                case '/' :
                   st.push(op1/op2);
                   break;
                case '^' :
                   st.push(pow(op1,op2));
                   break;    
            }
       }
    }
    return st.top();
}

int main(){
    cout<<"The total of Postfix Evaluation is : ";
    cout<<postfixEvaluation("46+2/5*7+")<<endl; //output: 32
    return 0; 
}