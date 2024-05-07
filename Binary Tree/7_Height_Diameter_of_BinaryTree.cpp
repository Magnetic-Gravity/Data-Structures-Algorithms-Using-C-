//Method (1):: Maximum Diameter of a Binary Tree     <<<Time complexity==O(N)
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

int calcDiameter(Node* root,int* height){
    if(root==NULL){
        *height=0;
        return 0;
    }
    int lh=0; int rh=0;

    int lDiameter=calcDiameter(root->left,&lh);
    int rDiameter=calcDiameter(root->right,&rh);
    int currDiameter=lh+rh+1;
    *height=max(lh,rh)+1;

    return max(currDiameter,max(lDiameter,rDiameter));
}

int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    
    int height=0;
    cout<<"The Maximum Diameter of the Binary Tree : ";
    cout<<calcDiameter(root, &height)<<"\n";
    return 0;
}


/*
//Method (1):: Maximum Diameter of a Binary Tree     <<<Time complexity==O(N^2)

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

int calcHeight(Node* root){
    if(root==NULL){
        return 0;
    }
    return max(calcHeight(root->left),calcHeight(root->right))+1;
}
int calcDiameter(Node* root){
    if(root==NULL){
        return 0;
    }
    int lHeight=calcHeight(root->left);
    int rHeight=calcHeight(root->right);
    int currDiameter=lHeight+rHeight+1;
    
    int lDiameter=calcDiameter(root->left);
    int rDiameter=calcDiameter(root->right);
    return max(currDiameter,max(lDiameter,rDiameter));
}

int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->left->left=new Node(5);
    root->left->left->left->left=new Node(8);
    root->left->left->left->left->left=new Node(8);

    cout<<"The Maximum Diameter of the Binary Tree : ";
    cout<<calcDiameter(root)<<" ";

    return 0;
}

//....................................................................................................................
/*
//Maximum Height of a Binary Tree
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

int calcHeight(Node* root){
    if(root==NULL){
        return 0;
    }
    int lHeight=calcHeight(root->left);
    int rHeight=calcHeight(root->right);

    return max(lHeight,rHeight)+1;
}

int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->left->left=new Node(5);
    root->left->left->left->left=new Node(8);
    root->left->left->left->left->left=new Node(8);

    cout<<"The Maximum Height of the Binary Tree : ";
    cout<<calcHeight(root)<<" ";

    return 0;
}
*/
