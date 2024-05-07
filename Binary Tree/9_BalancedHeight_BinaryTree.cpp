//Method (1) :: Is the Tree Balanced has Height ?? 
//Time Complexity <<< O(N) 
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

bool isBalanced(Node* root,int* height){
    if(root==NULL){
        return true;  //it means height is balanced becouse there is no element in this case
    }

    int lh=0; 
    int rh=0;
    
    if(isBalanced(root->left,&lh)==false){
        return false;
    }
    if(isBalanced(root->right,&rh)==false){
        return false;
    }

    *height=max(lh,rh)+1;

    if(abs(lh-rh)<=1){
        return true;
    }else{
        return false;
    }
}
int main(){
    struct Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    
    int height=0;
    if(isBalanced(root,&height)==true){
        cout<<"Balanced Tree"<<"\n";
    }else{
        cout<<"Unbalanced Tree"<<"\n";
    }
    return 0; 
}

/*
//Method (1) :: Is the Tree Balanced has Height ?? 
//Time Complexity <<< O(N^2) 
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

int height(Node* root){
    if(root==NULL){
        return 0;
    }
    int lh=height(root->left);
    int rh=height(root->right);

    return max(lh,rh)+1;
}
bool isBalanced(Node* root){
    if(root==NULL){
        return true;  //it means height is balanced becouse there is no element in this case
    }
    if(isBalanced(root->left)==false){
        return false;
    }
    if(isBalanced(root->right)==false){
        return false;
    }

    int lh=height(root->left);
    int rh=height(root->right);

    if(abs(lh-rh)<=1){
        return true;
    }else{
        return false;
    }
}
int main(){
    struct Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    
    if(isBalanced(root)){
        cout<<"Balanced Tree"<<"\n";
    }else{
        cout<<"Unbalanced Tree"<<"\n";
    }
    return 0; 
}
*/