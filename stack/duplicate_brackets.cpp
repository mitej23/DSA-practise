// This is a question taken from pepcoding's site
#include<iostream>
#include<stack>
using namespace std;

void displayStack(stack<int> s){
    cout<<"DIsplay stack: ";
    while(!s.empty()){
        cout<<s.top()<<"-";
        s.pop();
    }
    cout<<endl;
}

int duplicateBrackets(string s){
    stack<int> st;

    for(int i = 0; i <= s.length() - 1;i++){
        
        if(s[i] == ')'){
            if(st.top() == '('){
                cout<<"duplicate brackets";
                return 1;
            }else{
                while (st.top() != '('){
                    st.pop();
                }    
                st.pop();
            }
        }else{
            st.push(s[i]);
        }
    }

    cout<<"No duplicacy";
    return 0;
}


int main(){
    

    duplicateBrackets("a+b+((a+b))");

    return 0;
}