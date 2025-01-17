//Method (2) :: Lowest Common Ancestor for Two Nodes of a Binary Tree
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

Node* LCA(Node* root,int n2,int n1){
    if(root==NULL){
        return NULL;
    }
    if(root->data==n1 || root->data==n2){
        return root;
    }
    Node* leftLCA=LCA(root->left,n2,n1);
    Node* rightLCA=LCA(root->right,n2,n1);

    if(leftLCA && rightLCA){
        return root;
    }
    if(leftLCA!=NULL){
        return leftLCA;
    }
    return rightLCA;
}

int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    
    Node* lca=LCA(root,7,6);
    if(lca==NULL){
        cout<<"LCA doesn't exist"<<endl;
    }else{
        cout<<"LCA Lowest Common Ancestor is : "<<lca->data<<endl;
    }

    return 0; 
}
/*
//Method (1) :: Lowest Common Ancestor for Two Nodes of a Binary Tree
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

bool getPath(Node* root,int key,vector<int>&path){
    if(root==NULL){
        return false;
    }
    path.push_back(root->data);
    if(root->data==key){
        return true;
    }
    if(getPath(root->left,key,path) || getPath(root->right,key,path)){
        return true;
    }
    path.pop_back();
    return false;
}
int LCA(Node* root,int n1,int n2){
    vector<int>path1,path2;
    if(!getPath(root,n1,path1) || !getPath(root,n2,path2)){
        return -1;
    }
    int pc; //pc is path change here
    for(pc=0; pc<path1.size() && pc<path2.size(); pc++){
        if(path1[pc]!=path2[pc]){
            break;
        }
    }
    return path1[pc-1];
}

int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    
    int lca=LCA(root,7,6);
    if(lca==-1){
        cout<<"LCA doesn't exist"<<endl;
    }else{
        cout<<"LCA Lowest Common Ancestor is : "<<lca<<endl;
    }

    return 0; 
}
*/