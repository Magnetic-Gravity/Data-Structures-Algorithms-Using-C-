// Print all nodes at a given distance k in a Binary Tree
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

//case 1
void printSubtreeNodes(Node* root,int k){
    if(root==NULL || k<0){
        return;
    }
    if(k==0){
        cout<<root->data<<" ";
        return;
    }
    printSubtreeNodes(root->left,k-1);
    printSubtreeNodes(root->right,k-1);
}

//case 2
int printNodesAt_K(Node* root,Node* target,int k){
    if(root==NULL){
        return -1;
    }
    if(root==target){
        printSubtreeNodes(root,k);
        return 0;
    }
    int dl=printNodesAt_K(root->left,target,k);
    if(dl != -1){
        if(dl+1==k){
            cout<<root->data<<" ";
        }else{
            printSubtreeNodes(root->right,k-dl-2);
        }
     return dl+1;  
    }
    int dr=printNodesAt_K(root->right,target,k);
    if(dr != -1){
        if(dr+1==k){
            cout<<root->data<<" ";
        }else{
            printSubtreeNodes(root->left,k-dr-2);
        }
     return dr+1;  
    }
return -1;
}

int main(){
    struct Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);

    cout<<"Values from the given Position to K : ";
    printNodesAt_K(root,root->right,1); //Output 6 7 1

    return 0; 
}