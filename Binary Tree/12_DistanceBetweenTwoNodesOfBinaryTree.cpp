
//Distance b/w two Nodes is minimum number of edges to be traversed to reach one Node from another
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
Node* LCA(Node* root,int n1,int n2){
    if(root==NULL){
        return NULL;
    }
    if(root->data==n1 || root->data==n2){
        return root;
    }
    Node* leftLCA=LCA(root->left,n1,n2);
    Node* rightLCA=LCA(root->right,n1,n2);

    if(leftLCA==NULL && rightLCA==NULL){
        return NULL;
    }
    if(leftLCA != NULL && rightLCA != NULL){
        return root;
    }
    if(leftLCA!=NULL){
        return leftLCA;
    }
    return rightLCA;
}
int findDist(Node* root,int k,int dist){  //root means here LCA 
    if(root==NULL){
        return -1;
    }
    if(root->data==k){
        return dist;
    }
    int leftDist=findDist(root->left,k,dist+1);  //distance will be increased with k=n1 
    int rightDist=findDist(root->right,k,dist+1);//distance will be increased with k=n2 
    if(leftDist!=-1){
        return leftDist;
    } 
    return rightDist;

}
int distBtwNodes(Node* root,int n1,int n2){
    Node *lca=LCA(root,n1,n2);
    int d1=findDist(lca,n1,0);
    int d2=findDist(lca,n2,0);

    return d1+d2;
}
int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);

    cout<<"Distance Between two Nodes is : "<<distBtwNodes(root,5,7);

    return 0; 
}