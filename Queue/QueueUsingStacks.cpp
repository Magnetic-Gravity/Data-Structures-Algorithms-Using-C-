//Using Function Call Stack
#include<bits/stdc++.h> //it contains inbuilt function of queue
using namespace std;

class que{       //we can't use Queue word here becouse of collision with inbuilt function
    stack<int>s1;
    //another stack is a Call Stack here 
    public:
    void push(int x){
       s1.push(x);
    }
    int pop(){
        if(s1.empty()){
            cout<<"Queue is Empty \n";
            return -1;
        }
        int x=s1.top();
        s1.pop();
        if(s1.empty()){
            return x;
        }
        int res=pop();
        s1.push(x);
        return res;
    }
    bool empty(){
        if(s1.empty())
            return true;
        return false;
    }
};
int main(){
    que q; //object of queue
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.pop()<<"\n";
    q.pop();
    q.push(5);
  
    cout<<q.pop()<<"\n";
    cout<<q.pop()<<"\n";
    q.pop();
    cout<<q.pop()<<"\n";
    cout<<q.empty();
}
/*
//Using Two Stacks

#include<bits/stdc++.h> //it contains inbuilt function of queue
using namespace std;

class que{       //we can't use Queue becouse of collision with inbuilt function
    stack<int>s1;
    stack<int>s2;

    public:
    void push(int x){
       s1.push(x);
    }
    int pop(){
        if(s1.empty() && s2.empty()){
            cout<<"Queue is Empty \n";
            return -1;
        }
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        int topval=s2.top();
        s2.pop();
        return topval;
    }
    bool empty(){
        if(s1.empty() && s2.empty())
            return true;
        return false;
    }
};
int main(){
    que q; //object of queue
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.pop(); //it will delete 1 becouse stack remove element from top
    q.pop(); //it will delete 2 becouse stack remove element from top
    q.push(5);
    cout<<q.pop()<<"\n";
    cout<<q.pop()<<"\n";
    cout<<q.pop()<<"\n";

    cout<<q.pop()<<"\n";  //it will print -1 

    cout<<q.empty();
}

*/