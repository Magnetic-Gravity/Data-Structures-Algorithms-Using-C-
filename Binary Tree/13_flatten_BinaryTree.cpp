//Given a Binary Tree flatten it into linked list in-place. after flattening left of each node should 
//point to NULL and right should contain next Node in preorder sequence.(it is not allowed to use 
// other data structures )

#include "bits/stdc++.h"
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

void flatten(Node* root){
    if(root==NULL || root->left==NULL && root->right==NULL){
        return;
    }
    if(root->left!=NULL){
        flatten(root->left);
        Node* temp=root->right;
        root->right=root->left;
        root->left=NULL;

        Node* t=root->right; //t===tail 
        while(t->right!=NULL){
            t=t->right;
        }
        t->right=temp;
    }
    flatten(root->right);
}
void inOrderPrint(struct Node* root){
    if(root==NULL){
        return;
    }
    inOrderPrint(root->left);
    cout<<root->data<<" ";
    inOrderPrint(root->right);
}

int main(){
    struct Node* root=new Node(4);
    root->left=new Node(9);
    root->right=new Node(5);
    root->left->left=new Node(1);
    root->left->right=new Node(3);

    flatten(root);
    inOrderPrint(root);
    cout<<endl;

    return 0; 
}