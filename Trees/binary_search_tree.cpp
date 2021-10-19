#include <iostream>
#include <stdlib.h>

using namespace std;

struct node{
    int info;
    struct node *left;
    struct node *right;
} *root;

class BST {
    public:
        void insert(node* ,node*);
        void preorder(node*);
        void inorder(node*);
        void postorder(node*);
        void display(node*);

        BST () {
            root = NULL;
        }
};

int main(){
    int choice ,num;
    BST bst;
    node *temp;
    int level = 0;
    while (1)
    {
        cout<<"----------------------------"<<endl;
        cout<<"Operations on BST"<<endl;
        cout<<"1.Insert"<<endl;
        cout<<"2.Inorder Traversal"<<endl;
        cout<<"3.Preorder Traversal"<<endl;
        cout<<"4.Postorder Traversal"<<endl;
        cout<<"5.Display"<<endl;
        cout<<"6.Exit"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"Enter the number to be inserted"<<endl;
                cin>>temp->info;
                bst.insert(root,temp);
                break;
            case 2:
                cout<<"Inorder Traversal"<<endl;
                bst.inorder(root);
                cout<<endl;
                break;
            case 3:
                cout<<"Preorder Traversal"<<endl;
                bst.preorder(root);
                cout<<endl;
                break;
            case 4:
                cout<<"Postorder Traversal"<<endl;
                bst.postorder(root);
                cout<<endl;
                break;
            case 5:
                cout<<"Display"<<endl;
                // bst.display(root,level);
                cout<<endl;
                break;
            case 6:
                exit(1);
                break;
            default:
                cout<<"Wrong choice"<<endl;
        }
    }    
}

void BST::insert(node* root, node* temp){
    if(root == NULL){
        root = temp;
    }
    else if(temp->info < root->info){
        insert(root->left,temp);
    }
    else{
        insert(root->right,temp);
    }
}
    

void BST::preorder(node *root){
    if(root == NULL){
        cout<<"Tree is empty"<<endl;
        return;
    }
    if(root != NULL){
        cout<<root->info<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}


void BST::inorder(node *root){
    if(root == NULL){
        cout<<"Tree is empty"<<endl;
        return;
    }
    if(root != NULL){
        inorder(root->left);
        cout<<root->info<<" ";
        inorder(root->right);
    }
}

void BST::postorder(node *root){
    if(root == NULL){
        cout<<"Tree is empty"<<endl;
        return;
    }
    if(root != NULL){
        postorder(root->left);
        postorder(root->right);
        cout<<root->info<<" ";
    }
}

void BST::display(node *root,int level){
    int i;
    if(root != NULL){
        display(root->right,level + 1);
        cout<<endl;
        if(root == root){
            cout<<"Root -> ";
        }
        else{
            for(i=0;i<level;i++){
                cout<<"    ";
            }
            cout<<"|--";
        }
        cout<<root->info<<endl;
        display(root->left,level+1);
    }
}
        
  
       









