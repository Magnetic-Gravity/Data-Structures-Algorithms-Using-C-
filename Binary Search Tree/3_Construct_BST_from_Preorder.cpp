#include<iostream>
#include<climits>
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

Node* constructBST(int preorder[],int* idx,int key,int min,int max,int n){
    if(*idx >= n){
        return NULL;
    }
    //for root 
    Node* root=NULL;
    if(key>min && key<max){
        root=new Node(key);
        *idx=*idx+1;
    
        //for root->left
        if(*idx < n){
          root->left=constructBST(preorder,idx,preorder[*idx],min,key,n);
        }
        if(*idx < n){
          root->right=constructBST(preorder,idx,preorder[*idx],key,max,n);
        }
    }
    return root;
}

void printPreorder(Node *root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    printPreorder(root->left);
    printPreorder(root->right);
}

int main(){
    int preorder[]={10,2,1,13,11};
    int n=5;
    int idx=0; //initialization
    Node* root=constructBST(preorder,&idx,preorder[0],INT_MIN,INT_MAX,n);
    printPreorder(root);
    
    return 0;
}