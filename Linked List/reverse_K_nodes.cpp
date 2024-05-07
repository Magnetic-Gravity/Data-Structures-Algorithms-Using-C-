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
//Reverse through iterative approach
node* reverse(node* &head,int k){
   node* prevptr=NULL;
   node* currptr=head;
   node* nextptr;
   int count=0;
   while(currptr!=NULL && count<k){
      nextptr=currptr->next;
      currptr->next=prevptr;
      prevptr=currptr;
      currptr=nextptr;
      count++;
   }
   if(nextptr!=NULL){   //also you can take currptr here
       head->next=reverse(nextptr,k);
   } 
   return prevptr;
}
int main()
{
    node* head=NULL;
    inserAtTail(head,1);
    inserAtTail(head,2);
    inserAtTail(head,3);
    inserAtTail(head,4);
    inserAtTail(head,5);
    inserAtTail(head,6);
    display(head);
    //int k=2;  // 2->1->4->3->6->5->NULL
    //int k=3;  // 3->2->1->6->5->4->NULL
    node* newhead=reverse(head,3); //k=3 here 
    display(newhead);
    

  return 0;
}