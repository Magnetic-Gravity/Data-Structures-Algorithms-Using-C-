// method Iterative  approach
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
void display(node* head){
   node* temp=head;
   while(temp!=NULL){
    cout<<temp->data<<"->";
    temp=temp->next;
   }
   cout<<"NULL"<<endl;
}
node* mergeIterative(node* &head1,node* &head2){
    node* p1=head1;
    node* p2=head2;
    node* Dummynode=new node(-1);
    node* p3=Dummynode;
    while(p1!=NULL && p2!=NULL){
        if(p1->data<p2->data){
            p3->next=p1;
            p1=p1->next;
        }else{    //(p1->data>p2->data)
            p3->next=p2;
            p2=p2->next;
        }
        p3=p3->next;
    }
    while(p1!=NULL){
        p3->next=p1;
        p1=p1->next;
        p3=p3->next;
    }
    while(p2!=NULL){
        p3->next=p2;
        p2=p2->next;
        p3=p3->next;
    }

    return Dummynode->next;
}
int main(){
    node* head1=NULL;
    node* head2=NULL;
    int arr1[]={1,2,4,6,9};
    int arr2[]={3,5,7,8};
    for(int i=0; i<5; i++){
        inserAtTail(head1,arr1[i]);
    }
    for(int i=0; i<4; i++){
        inserAtTail(head2,arr2[i]);
    }
    display(head1);
    display(head2);
    node* newhead=mergeIterative(head1,head2);
    display(newhead);
    
  return 0;
}
