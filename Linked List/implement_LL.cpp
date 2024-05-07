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
    n->next=head;
    head=n;
}
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
bool search(node* &head,int key){
    node* temp=head;

    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}
int main()
{
    node* head=NULL;
    //insert at Tail
    inserAtTail(head,1);
    inserAtTail(head,2);
    inserAtTail(head,3);
    display(head);
    //Insert at Head
    insertAthead(head,4);
    insertAthead(head,5);
    display(head); 
    //Search in List
    // boolean output(if the key is found than 1(true) otherwise 0(false)) 
    cout<<search(head,3)<<endl;
    

  return 0;
}