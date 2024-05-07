#include<iostream>
using namespace std;
class node
{
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
void display(node* &head){
   node* temp=head;
   while(temp!=NULL){
    cout<<temp->data<<"->";
    temp=temp->next;
   }
   cout<<"NULL"<<endl;
}
void makeCycle(node* &head,int pos){
   node* temp=head;
   node* startNode;
   int count=1;
   while(temp->next!=NULL){
        if(count==pos){
            startNode=temp;
        }
        temp=temp->next;
        count++;
   }
    temp->next=startNode;  
}
bool detectCycle(node* &head){
    node* slow=head;
    node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return true;
        }
    }
    return false;  
}
void removeCycle(node* &head){
    node* slow=head;
    node* fast=head;
    do{
       slow=slow->next;
       fast=fast->next->next;
    }while(slow!=fast); //both are on same position

    fast=head;
    while(fast->next!=slow->next){
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=NULL;
}
int main(){
    node* head=NULL;
    inserAtTail(head,1);
    inserAtTail(head,2);
    inserAtTail(head,3);
    inserAtTail(head,4);
    inserAtTail(head,5);
    inserAtTail(head,6);
    inserAtTail(head,7);
    inserAtTail(head,8);
    cout<<"The Linked list is =>>>  ";
    display(head);
    
    makeCycle(head,5);
    //display(head);
    cout<<detectCycle(head)<<" "<<" => It contains a Cycle"<<endl; // output: 1 
    removeCycle(head);
    cout<<detectCycle(head)<<" "<<" => We have successfully removed the Cycle"<<endl;// output: 0

  return 0;
}
