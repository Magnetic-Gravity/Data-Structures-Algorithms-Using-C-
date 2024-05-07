
//Method 2:: By Making Pop Operation Costly 
#include<bits/stdc++.h>
using namespace std;
class Stack{
    int N;
    queue<int>q1;
    queue<int>q2;
    public:
    Stack(){
        N=0; //size initialization 
    }
    void pop(){
        if(q1.empty()){
            return;
        }
       while(q1.size()!=1){
           q2.push(q1.front());
           q1.pop();
       }
        q1.pop();
        N--;

        queue<int>temp=q1;
        q1=q2;
        q2=temp;
    }
    void push(int val){
       q1.push(val);  
       N++;
    }
    int top(){
        if(q1.empty()){
            return -1;
        }
        while(q1.size()!=1){
           q2.push(q1.front());
           q1.pop();
        }
        int ans=q1.front();
        q2.push(ans);

        queue<int>temp=q1;
        q1=q2;
        q2=temp;
        
        return ans;
    }
    int size(){
        return N;
    }
};
int main(){
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    cout<<st.top()<<" ";  st.pop();
    cout<<st.top()<<" ";  st.pop();
    cout<<st.top()<<" ";  st.pop();
    cout<<st.top()<<" ";  st.pop();
    
    cout<<"\nSize of the Stack after pop all elements is : ";
    cout<<st.size();
}

/*
//Method 1:: By Making Push Operation Costly 

#include<bits/stdc++.h>
using namespace std;

class Stack{
    int N;
    queue<int>q1;
    queue<int>q2;
    public:
    Stack(){
        N=0; //size initialization 
    }
    void push(int val){
        //step 1 :: push value in q2
       q2.push(val);  
       N++;
       //step 2:: pop every element of q1 till it will be empty and push them in q2
       while(!q1.empty()){
           q2.push(q1.front());
           q1.pop();
       }
       //step 3 ::Swap(q1,q2) 
       queue<int>temp=q1;
       q1=q2;
       q2=temp;
    }
    void pop(){
        q1.pop();
        N--;
    }
    int top(){
        return q1.front();
    }
    int size(){
        return N;
    }
};
int main(){
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    cout<<st.top()<<" ";  st.pop();
    cout<<st.top()<<" ";  st.pop();
    cout<<st.top()<<" ";  st.pop();
    cout<<st.top()<<" ";  st.pop();
    cout<<"\nSize of the Stack after pop all elements is : ";
    cout<<st.size();
}

*/