#include<iostream>
#include<stack>
using namespace std;

// Striver 

// We have to do a preorder traversal without using the recursion method.

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

void iterative_preorder(Node *root){
    stack<Node*> st;
    if(root == NULL) return;
    st.push(root);
    while(!st.empty()){
        root = st.top();
        st.pop();
        cout<<root->data<<"->";
        if(root->right != NULL){
            st.push(root->right);
        }
        if(root->left != NULL){
            st.push(root->left);
        }
    }
}

int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);


    /* 
            1
          /   \
        2       3
       / \     / \ 
      4   5   6   7

    */

   iterative_preorder(root);



    return 1;
}

