#include<iostream>
#include<stack>
using namespace std;

void displayStack(stack<int> s){
    cout<<"DIsplay stack: ";
    while(!s.empty()){
        cout<<s.top()<<":";
        s.pop();
    }
    cout<<endl;
}

void nextGreaterEle(int arr[],int size){
    stack<int> st;
    int newArr[size];

    st.push(arr[size - 1]);
    newArr[size - 1] = -1;
    for(int i = size - 2; i >=0;i--){
        while(st.size() > 0 && arr[i] > st.top()){
            st.pop();
        }
        if(st.size() == 0){
            newArr[i] = -1;
        }else{
            newArr[i] = st.top();
        }
        st.push(arr[i]);
    }
    for(int i = 0; i < size;i++){
        cout<<newArr[i];
    }
}

int main(){
    int count;
    // cout<<"Enter number of elements you want to add: ";
    // cin>>count;
    // int nums[5];
    // for(int i = 0;i < count;i++){
    //     cin>>nums[i];
    // }
    count = 5;
    int nums[5] = {5,3,8,-2,7};
    nextGreaterEle(nums,count);


    return 1;
}