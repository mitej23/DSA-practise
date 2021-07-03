#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;
        node* prev;

        node(int val){
            data = val;
            next = NULL;
            prev = NULL;
        }
};

void display(node* head){
    node* temp = head;
    while(temp->next != NULL){
        cout<<temp->data<<"<->";
        temp = temp->next;
    }
    cout<<temp->data<<endl;
}

void insertAtHead(node* &head,int val){
    node* newNode = new node(val);
    newNode->next = head;
    if(head != NULL){
        head->prev = newNode;
    }
    head = newNode;
};

void insertAtEnd(node* &head,int val){

    if(head == NULL){
        insertAtHead(head,val);
        return;
    }

    node* newNode = new node(val);
    node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = newNode;
    temp->next->prev = temp;
}

void deleteNode(node* &head,int val){
    node* temp = head;
    
    while(temp->data != val){
        temp = temp->next;
    }
    temp->next->prev = temp->prev;
    temp->prev->next = temp->next;
    
}

int main(){
    node* head = new node(25);
    node* secondNode = new node(35);
    head->next = secondNode;
    head->next->prev = head;

    insertAtEnd(head,45);
    insertAtEnd(head,55);
    insertAtEnd(head,65);

    // node* emptyList = NULL;
    // insertAtEnd(emptyList,25);
    // display(emptyList);

    display(head);
    deleteNode(head,45);
    display(head);
    

    return 0;
}