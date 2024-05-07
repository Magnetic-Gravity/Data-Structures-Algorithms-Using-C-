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
void insertAthead(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        n->next=n;
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=head){
       temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;
}
void inserAtTail(node* &head,int val){
    if(head==NULL){
       insertAthead(head,val);
       return;
    }
    node* n=new node(val);
    node* temp=head;
    while(temp->next!=head){
       temp=temp->next;
    }
    temp->next=n;
    n->next=head;
}
void display(node* head){
   node* temp=head;
   do{
     cout<<temp->data<<"->";
     temp=temp->next;
   }while(temp!=head);
   cout<<endl;
}
void deleteAtHead(node* &head){
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    node* todelete=head;
    temp->next=head->next;
    head=head->next;
    delete todelete;
}
void deletion(node* &head,int pos){
    if(pos==1){
       deleteAtHead(head);
       return;  
    }
       node* temp=head;
       int count=1;
       while(count!=pos-1){
            temp=temp->next;
            count++;
       }
       node* todelete=temp->next;
       temp->next=temp->next->next;
       delete todelete; 
}
int main()
{
    node* head=NULL;
    //insert at Tail
    inserAtTail(head,1);
    inserAtTail(head,2);
    inserAtTail(head,3);
    inserAtTail(head,4);
    display(head);  //output:: 1->2->3->4->
    //Insert at Head
    insertAthead(head,5);
    insertAthead(head,6);
    display(head); //output:: 6->5->1->2->3->4->

    //deletion at a given value
    deletion(head,4);//output:: 6->5->1->3->4->
    display(head);
    //deletion of Head
    deleteAtHead(head);//output:: 5->1->3->4->
    display(head);

  return 0;
}