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

void stockSpan(int arr[],int size){
    stack<int> st;
    int newArr[size];
    st.push(0);
    newArr[0] = 1;

    for(int i = 1;i < size;i++){
        while(st.size() > 0 && arr[i] > arr[st.top()] ){
            st.pop();
        }
        if(st.size() == 0){
            newArr[i] = i + 1;
        }else{
            newArr[i] = i - st.top();
        }
        st.push(i);

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
    count = 9;
    int nums[count] = {2,5,9,3,1,12,6,8,7};
    stockSpan(nums,count);

    return 1;
}