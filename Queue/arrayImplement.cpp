#include<iostream>
using namespace std;
#define n 20

class queue{
    int* arr;
    int front;
    int back;
    public:
    queue(){
        arr=new int[n]; //memory allocation to array 
        front=-1; //initialize of front
        back=-1;  //initialize of back
    }
    void push(int x){
        if(back==n-1){
           cout<<"Queue is Overflow"<<endl;
           return;
        }
        back++;
        arr[back]=x;
        if(front==-1){
            front++;
        }
    }
    void pop(){
        if(front== -1 || front>back){
            cout<<"No elemets in Queue"<<endl;
            return;
        }
        front++;
    }
    int peek(){
        if(front== -1 || front>back){
            cout<<"No elemets in Queue"<<endl;
            return -1;
        }
        return arr[front];
    } 
    bool empty(){
        if(front== -1 || front>back){
            cout<<"No elemets in Queue"<<endl;
            return true;
        }
        return false;
    }
};

int main(){
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();

    cout<<q.empty()<<endl;
    
}