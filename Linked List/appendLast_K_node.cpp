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
int length(node *head){
    int l=0;
    node* temp=head;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    return l;
}
node* kappend(node* &head,int k){
    node* newHead;
    node* newTail;
    node* temp=head; //y original tail of linked list h isme add kar diya head of original list
    int l=length(head); //length function s length mangwa li 
    k=k%l; // if(k>l)
    int count=1;
    while(temp->next!=NULL){
        if(count==l-k){
           newTail=temp; 
        }
        if(count==l-k+1){
            newHead=temp;
        }
        temp=temp->next;
        count++;
    }
   newTail->next=NULL;
   temp->next=head;  //jese hi last m pahuche last waale temp ka next head ki side point karega
 return newHead;
}
int main(){
    node* head=NULL;
    int arr[]={1,2,3,4,5,6};
    for(int i=0; i<6; i++){
        inserAtTail(head,arr[i]);
    }
    display(head);
    //int k=2;  //5->6->1->2->3->4->NULL
    //int k=3; //4->5->6->1->2->3->NULL
    node* newNode=kappend(head,3);
    display(newNode);

  return 0;
}

/*
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
int length(node *head){
    int l=0;
    node* temp=head;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    return l;
}
node* kappend(node* &head,int k){
    node* newHead;
    node* newTail;
    node* tail=head;
    int l=length(head);
    k=k%l; // if(k>l)
    int count=1;
    while(tail->next!=NULL){
        if(count==l-k){
           newTail=tail; 
        }
        if(count==l-k+1){
            newHead=tail;
        }
        tail=tail->next;
        count++;
    }
   newTail->next=NULL;
   tail->next=head;
 return newHead;
}
int main(){
    node* head=NULL;
    int arr[]={1,2,3,4,5,6};
    for(int i=0; i<6; i++){
        inserAtTail(head,arr[i]);
    }
    display(head);
    node* newNode=kappend(head,3);
    display(newNode);

  return 0;
}

/*  
int main(){
    node* head=NULL;
    inserAtTail(head,1);
    inserAtTail(head,2);
    inserAtTail(head,3);
    inserAtTail(head,4);
    inserAtTail(head,5);
    inserAtTail(head,6); 
    display(head);
*/