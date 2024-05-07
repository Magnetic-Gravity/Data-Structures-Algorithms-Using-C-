#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
};
void display(node* head){
    while(head!=NULL){
       cout<<head->data<<"->";
       head=head->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    node* head=NULL;
    node* first=NULL;
    node* second=NULL;
    node* third=NULL;
    

    head=new node();
    first=new node();
    second=new node();
    third=new node();

    head->data=1;
    head->next=first;

    first->data=2;
    first->next=second;

    second->data=3;
    second->next=third;

    third->data=4;
    third->next=NULL;

    display(head);
    return 0;
}