#include "bits/stdc++.h"
using namespace std;

struct Node{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
//Pre_Order traversal
void pre_Order(struct Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    pre_Order(root->left);
    pre_Order(root->right);
}
//In_Order traversal
void in_Order(struct Node* root){
    if(root==NULL){
        return;
    }
    in_Order(root->left);
    cout<<root->data<<" ";
    in_Order(root->right);
}
//Post_Order traversal
void post_Order(struct Node* root){
    if(root==NULL){
        return;
    }
    post_Order(root->left);
    post_Order(root->right);
    cout<<root->data<<" ";
}

int main(){
    struct Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    //Pre_Order traversal
       cout<<"Pre_Order traversal is  : ";
       pre_Order(root);
       cout<<endl;
    //In_Order traversal
       cout<<"In_Order traversal is   : ";
       in_Order(root);
        cout<<endl;
    //Post_Order traversal
       cout<<"Post_Order traversal is : ";
       post_Order(root);
       cout<<endl;

    return 0; 
}