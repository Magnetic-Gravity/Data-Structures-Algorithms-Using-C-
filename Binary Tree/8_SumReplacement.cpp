//Replace the value of each node with the sum of all subtree nodes and itself

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

void sumReplace(Node* root){
    if(root==NULL){
        return;
    }
    sumReplace(root->left);
    sumReplace(root->right);

    if(root->left!=NULL){
        root->data+=root->left->data;
    }
    if(root->right!=NULL){
        root->data+=root->right->data;
    }
}

//Pre_Order traversal
void preOrder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
int main(){
    struct Node* root=new Node(5);
    root->left=new Node(4);
    root->right=new Node(2);
    root->left->left=new Node(7);
    root->left->right=new Node(8);

    cout<<"\nThe Tree before Sum Replacement is : ";
    preOrder(root);
    cout<<"\nThe Tree after sum Replacement is : ";
    sumReplace(root);
    preOrder(root);
    cout<<"\n";
    return 0; 
}