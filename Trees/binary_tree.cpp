#include<bits/stdc++.h>

using namespace std;

// Binary Tree

// Properties
// Maximum Nodes at Level(L) : 2^L - 1
// Maximum Node in a tree of height H : 2^H - 1
// For n nodes in a tree of height H, the maximum number of nodes at level L is 2^(H-L) - 1
// For n nodes, minimum possible heigt of tree is log2(n)


struct Node{
    int data;
    Node *left;
    Node *right;

    Node(int d){
        data = d;
        left = NULL;
        right = NULL;
    } 
};

void preOrder(Node *root){
    if(root == NULL){
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
    
}

void inOrder(Node *root){
    if(root == NULL){
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void postOrder(Node *root){
    if(root == NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

/* 
            1
          /   \
        2       3
       / \     / \ 
      4   5   6   7

*/

int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << "Pre Order Traversal of the tree is : ";
    preOrder(root);
    cout << endl;
    cout << "In Order Traversal of the tree is : ";
    inOrder(root);
    cout << endl;
    cout << "Post Order Traversal of the tree is : ";
    postOrder(root);
    cout << endl;

    return 1;
}