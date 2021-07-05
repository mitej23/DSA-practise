#include <iostream>
#include <stack>
using namespace std;

void display(stack<int> s){
    while(!s.empty()){
        cout<<s.top()<<">";
        s.pop();
    }
    cout<<endl;
}

void insertAtBottom(stack<int> &s,int num){
    if(s.empty()){
        s.push(num);
        return;
    }
    int top = s.top();
    s.pop();
    insertAtBottom(s,num);
    s.push(top);
}

void reverseStack(stack<int> &s){
    if(!s.empty()){
        int topEl = s.top();
        s.pop();
        reverseStack(s);
        insertAtBottom(s,topEl);
    }
}

int main(){
    stack<int> st;
    st.push(5);
    st.push(6);
    st.push(7);
    st.push(8);
    display(st);
    reverseStack(st);
    display(st);

   
    return 1;
}