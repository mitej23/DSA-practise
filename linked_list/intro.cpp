#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;

        node(int val){
            data = val;
            next = NULL;
        }
};

void insertAtTail(node* head,int val){
    node* newNode = new node(val);
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

void display(node* head){
    node* temp = head;
    while(temp->next != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<temp->data;
}

void deleteNode(node* head,int val){
    node* temp = head;
    node* prev = NULL;
    while(temp->data != val){
        prev = temp;
        temp = temp->next;
    }
    prev->next = temp->next;

}

node* reverseList(node* &head){
    node* prev = NULL;
    node* curr = head;
    node* nextNode;

    while(curr!= NULL){
        nextNode = curr->next;
        curr->next = prev;

        prev = curr;
        curr = nextNode;
    }
    return prev;
}

int main(){

    node* head = new node(10);
    node* first_el = new node(12);
    head->next = first_el;
    insertAtTail(head,25);
    insertAtTail(head,15);
    //deleteNode(head,25);
    display(head);
    cout<<endl;
    node* newHead = reverseList(head);

    display(newHead);

    return 0;
}