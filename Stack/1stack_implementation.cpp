//Implementing Stack using Linked List
#include<bits/stdc++.h>
using namespace std;
class StackNode{
    public:
       int data;
       StackNode* next;
};
StackNode* newNode(int data){
    StackNode* stackNode=new StackNode();
    stackNode->data=data;
    stackNode->next=NULL;
    return stackNode;
}
int isEmpty(StackNode* root){
    return !root;
}
void push(StackNode** root, int data){
    StackNode* stackNode=newNode(data);
    stackNode->next=*root;
    *root=stackNode;
    cout<<data<<" pushed to stack\n";
}
int pop(StackNode** root){
    if(isEmpty(*root))
        return INT_MIN;
    
    StackNode* temp= *root;
    *root=(*root)->next;
    int popped=temp->data;
    free(temp);
    return popped;
}
int peek(StackNode* root){
    if(isEmpty(root))
        return INT_MIN;

    return root->data;   
}
int main(){
    StackNode* root=NULL;
    push(&root, 10);
    push(&root, 20);
    push(&root, 30);
    cout<<pop(&root)<<" Popped from Stack \n ";
    cout<<"Top Element is "<<peek(root)<<endl;
    cout<<"Elements present in stack : ";

    while(!isEmpty(root)){
        cout<<peek(root)<<" ";
        pop(&root);
    }
   return 0;
}


/*
//Implementing Stack using Arrays
#include<iostream>
using namespace std;
#define n 100

class stack{
    
    int* arr;
    int top;
         
    public:
        stack(){
         arr=new int[n];
         top=-1;
        }

        void push(int x){
           if(top==n-1){
               cout<<"Stack Overflow"<<endl;
               return;
           }
           top++;
           arr[top]=x;
        }

        void pop(){
            if(top==-1){
                cout<<"No element to pop,...Stack underflow"<<endl;
                return;
            }
            top--;
        }
        int Top(){
            if(top==-1){
                cout<<"No element in Stack"<<endl;
                return -1;
            }
            return arr[top];
        }
        bool empty(){
            return top== -1;
        }
};
int main(){
    stack st;
    st.push(1);   
    st.push(2);
    st.push(3);
    cout<<st.Top()<<endl;  //output: 3 
    st.pop();
    cout<<st.Top()<<endl;  //output: 2 
    st.pop();
    st.pop();
    st.pop();               //output: NO element to pop 
    cout<<st.empty()<<endl; //output: 1 (true)
    return 0;
}

*/