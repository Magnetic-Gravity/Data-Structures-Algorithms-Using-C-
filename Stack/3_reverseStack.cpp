#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &st, int element){
    if(st.empty()){
        st.push(element);
    }
    int topElement=st.top();
    st.pop();
    insertAtBottom(st,element);
    st.push(topElement);
}
void ReverseStack(stack<int> &st){
     if(st.empty()){
        return;
     }
    int element=st.top();
    st.pop();
    ReverseStack(st);
    insertAtBottom(st,element);
}
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    //ReverseStack(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}
