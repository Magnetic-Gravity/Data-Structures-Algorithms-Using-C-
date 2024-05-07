#include<iostream>
#include<stack>
#include<math.h>
using namespace std;

int prefixEvaluation(string s){
    stack<int>st;
    for(int i=s.length()-1; i>=0; i--){
       if(s[i]>='0' && s[i]<='9'){   //if it is an Operand
            st.push(s[i]-'0');
       }
       else{    //if it is an operator
            int op1=st.top();
            st.pop();
            int op2=st.top();
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
    cout<<"The total of Prefix Evaluation is : ";
    cout<<prefixEvaluation("-+7*45+20")<<endl; //output: 25
    return 0; 
}