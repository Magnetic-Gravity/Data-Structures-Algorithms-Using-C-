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
void inserAtTail(node* &head,int val){
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
}
void display(node* head){
   node* temp=head;
   while(temp!=NULL){
    cout<<temp->data<<"->";
    temp=temp->next;
   }
   cout<<"NULL"<<endl;
}
void deleteAtHead(node* &head){
   node* todelete=head;
   head=head->next;
   delete todelete;
}
void deletion(node* &head,int val){
   if(head==NULL){
    return;
   }
   if(head->next==NULL){
     deleteAtHead(head);
     return;
   }
   node* temp=head;
   while(temp->next->data!=val){
      temp=temp->next;
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
    inserAtTail(head,5);
    display(head);
    //deletion at a given value
    deletion(head,4);
    display(head);
    //deletion of Head
    deleteAtHead(head);
    display(head);
    

  return 0;
}