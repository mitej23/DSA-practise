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

void createLoop(node* head){
    node* temp = head;
    while(temp->data != 15){
        temp = temp->next;
    } 
    node* ref = temp;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = ref;
}

bool checkLoop(node* head){
    node* hare = head->next;
    node* tortoise = head;

    while(hare->next != NULL && tortoise->next != NULL ){
        if(hare->data == tortoise->data){
            return true;
        }
        hare = hare->next->next;
        tortoise = tortoise->next;
    }
    
    
    return false;
    
}

void breakLoop(node* head){
    node* start = head;
    node* hare = head;
    node* tortoise = head;

    hare = hare->next->next;
    tortoise = tortoise->next;
    while(hare->data != tortoise->data){
        hare = hare->next->next;
        tortoise = tortoise->next;
    }
    hare = start;
    while(hare->next->data != tortoise->next->data){
        hare = hare->next;
        tortoise = tortoise->next;
    }
    tortoise->next = NULL;
}

int main(){

    node* head = new node(10);
    node* first_el = new node(12);
    head->next = first_el;
    insertAtTail(head,25);
    insertAtTail(head,15);
    insertAtTail(head,35);
    insertAtTail(head,45);
    insertAtTail(head,55);
    insertAtTail(head,65);

    bool before = checkLoop(head);
    cout<<before<<endl;
    display(head);
    createLoop(head);
    //cout<<endl<<head->data;
    
    bool check = checkLoop(head);
    cout<<endl<<check<<endl;
    breakLoop(head);
    display(head);

    
    return 1;    
}