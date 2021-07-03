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

void insertAtHead(node* &head,int val){
    node* newNode = new node(val);
    newNode->next = head;
    head = newNode;
};

void insertAtTail(node* &head,int val){
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
}

void display(node* head){
    node* temp = head;
    while(temp->next != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<temp->data<<endl;
}

node* merge(node* &n,node* &m){
    node* merged = NULL;

    node* ptr1 = n;
    node* ptr2 = m;
    while(ptr1->next != NULL || ptr2->next != NULL){
        if(ptr1->data < ptr2->data){
            insertAtTail(merged,ptr1->data);
            ptr1 = ptr1->next;
        }else{
            insertAtTail(merged,ptr2->data);
            ptr2 = ptr2->next;
        }
        
    }
    return merged;
}

int main(){
    node* firstHead = new node(10);
    node* secHead = new node(15);

    insertAtTail(firstHead,20);
    insertAtTail(firstHead,30);
    insertAtTail(firstHead,40);
    insertAtTail(firstHead,50);
    insertAtTail(firstHead,60);
    insertAtTail(secHead,25);
    insertAtTail(secHead,35);
    insertAtTail(secHead,45);
    insertAtTail(secHead,55);

    display(firstHead);
    display(secHead);

    

    node* result = merge(firstHead,secHead);
    display(result);

    return 0;
}