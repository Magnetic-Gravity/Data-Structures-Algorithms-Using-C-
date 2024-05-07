//Method 2 :: delete a key value in a BST 

#include<iostream>
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

Node* inorderSucc(Node* root){
    Node* curr=root;
    while(curr!=NULL && curr->left!=NULL){
        curr=curr->left;
    }
    return curr;
}

Node* deleteInBST(Node* root,int key){
    //case 1 :: node is a leaf node
    if(root->data > key){
        root->left=deleteInBST(root->left,key);
    }
    else if(root->data < key){
        root->right=deleteInBST(root->right,key);
    }
    //case 2 :: root has one child
    else{ 
        if(root->left==NULL){
            Node* temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL){
            Node* temp=root->left;
            free(root);
            return temp;
        }
        //case 3 :: root has two child 
        Node* temp=inorderSucc(root->right);
        root->data=temp->data;
        root->right=deleteInBST(root->right,key);
    }   
    return root;
}

void inorder(Node *root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
    Node* root=new Node(4);
    root->left=new Node(2);
    root->right=new Node(5);
    root->left->left=new Node(1);
    root->left->right=new Node(3);
    root->right->right=new Node(6);
    
    inorder(root);
    cout<<endl;
    root=deleteInBST(root,5);
    inorder(root);
    cout<<endl;

    return 0;
}

/*
//Method 1 :: Search a key value in a BST 

#include<iostream>
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

Node* searchInBST(Node* root,int key){
    if(root==NULL){
        return NULL;
    }
    if(root->data==key){
        return root;
    }

    if(root->data > key){
        return searchInBST(root->left,key);
    }
    return searchInBST(root->right,key); // root->data < key
}
int main(){
    Node* root=new Node(4);
    root->left=new Node(2);
    root->right=new Node(5);
    root->left->left=new Node(1);
    root->left->right=new Node(3);
    root->right->right=new Node(6);
    
    if(searchInBST(root,7)==NULL){
        cout<<"Key dosen't exist";
    }else{
        cout<<"Key exists";
    }

    return 0;
}

*/