//Count and Sum of all Nodes in a Binary Trees 

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
//count of all Nodes in a Binary Tree
int countNodes(Node* root){
    if(root==NULL){
        return 0;
    }
    return countNodes(root->left)+countNodes(root->right)+1;
}
//sum of Nodes all Nodes in a Binary Tree
int sumNodes(Node* root){
    if(root==NULL){
        return 0;
    }
    return sumNodes(root->left)+sumNodes(root->right)+root->data;
}

int main(){
    struct Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->right->right=new Node(7);
     
    cout<<"The Number of Nodes are : ";
    cout<<countNodes(root); //output = 7
    
    cout<<"\nThe Sum of all Nodes is : ";
    cout<<sumNodes(root); //output= 17
    return 0;
}

