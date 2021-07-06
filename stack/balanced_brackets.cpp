#include<iostream>
#include<stack>
using namespace std;

void displayStack(stack<char> s){
    cout<<"DIsplay stack: ";
    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
    cout<<endl;
}

bool remove(stack<char> &st,char c){
    if(st.empty()){
        cout<<"Bracket are not balanced";
        return false;
    } 
    while(st.top() != c){
        st.pop();
    }
    return true;
}

void balanced_brackets(string s){
    stack<char> st;
    char bracket;
    

    for(int i = 0;i < s.length();i++){
        if(s[i] == ']' || s[i] == ')' || s[i] == '}'){
            bool check;
            bracket = s[i];
            if(bracket == ']'){
                check = remove(st,'[');
                if(!check) return;
            }else if(bracket == ')'){
                check = remove(st,'(');
                if(!check) return;
            }else if(bracket == '}'){
                check = remove(st,'{');
                if(!check) return;
            }
            st.pop();
        }else{
            st.push(s[i]);
        }
    }
    if(st.empty()){
        cout<<"Brackets are balanced ";
        return;
    }else{
        cout<<"Brackets are not balanced";
        return;
    }
}

int main(){
    string balanced = "([(a + b) + {(c + d) * (e / f)}]";
    string nbalanced = "[(a+b)+{(c+d)*(e/f)]}";
    balanced_brackets(nbalanced);

    return 0;
}