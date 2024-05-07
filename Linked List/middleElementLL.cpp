#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};
void pushAtLast(node* &head, int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->next=NULL;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
       cout<<temp->data<<"->";
       temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
void mid(node* head){
    node* slow=head;
    node* fast=head;
    while(fast!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<slow->data<<endl;
}
int main(){
    node* head=NULL;
    int arr[]={1,3,4,5,6,7,8,9};
    for(int i=0; i<8; i++){
        pushAtLast(head,arr[i]);
    }
    display(head);
    mid(head);
}
/*
#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};
void pushAtLast(node* &head, int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->next=NULL;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
       cout<<temp->data<<"->";
       temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int length(node* head){
    int l=0; 
    node* temp=head;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    return l;
}
void mid(node* head){
   int l=length(head);
   int m=l/2;
   node* temp=head;
   while(m--){
    temp=temp->next;
   }
  cout<<"the middle element of linked is ["<<temp->data <<"]"<<endl;
}
int main(){
    node* head=NULL;
    int arr[]={3,4,5,6,7,8,9};
    for(int i=0; i<7; i++){
        pushAtLast(head,arr[i]);
    }
    // pushAtLast(head,1);
    // pushAtLast(head,2);
    // pushAtLast(head,3);
    // pushAtLast(head,4);
    // pushAtLast(head,5);
    // pushAtLast(head,6);
    display(head);
    mid(head);
}
*/