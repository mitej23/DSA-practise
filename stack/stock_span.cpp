// #include<iostream>
// #include<stack>
// using namespace std;

// void displayStack(stack<int> s){
//     cout<<"DIsplay stack: ";
//     while(!s.empty()){
//         cout<<s.top()<<":";
//         s.pop();
//     }
//     cout<<endl;
// }

// void stockSpan(int arr[],int size){
//     stack<int> st;
//     int newArr[10];
//     st.push(0);
//     newArr[0] = 1;

//     for(int i = 1;i < size;i++){
//         while(st.size() > 0 && arr[i] > arr[st.top()] ){
//             st.pop();
//         }
//         if(st.size() == 0){
//             newArr[i] = i + 1;
//         }else{
//             newArr[i] = i - st.top();
//         }
//         st.push(i);

//     }

//     for(int i = 0; i < size;i++){
//         cout<<newArr[i];
//     }
// }

// int main(){
//     int count;
//     cout<<"Enter number of elements you want to add: ";
//     cin>>count;
//     int nums[5];
//     for(int i = 0;i < count;i++){
//         cin>>nums[i];
//     }
//     count = 9;
//     //int nums[10] = {2,5,9,3,1,12,6,8,7};
//     stockSpan(nums,count);

//     return 1;
// }

#include<iostream>
#include<stack>
using namespace std;

void stockSpan(int arr[],int size){
    stack<int> st;
    int newArr[9];
    st.push(arr[0]);
    newArr[0] = 1;
    
    int count = 0;

    for(int i = 1;i < size;i++){
        while(st.size() > 0 && arr[i] > st.top()){
            st.pop();
            count++;
        }
        if(st.empty()){
            newArr[i] = i + 1;
        }else{
            newArr[i] = count + 1;
        }
        st.push(arr[i]);
        count = 0;
    }
    //Solution
    for(int i = 0; i < 9;i++){
        cout<<newArr[i];
    }
    

}


int main(){
    // int count;
    // cout<<"Enter number of elements you want to add: ";
    // cin>>count;
    // int nums[5];
    // for(int i = 0;i < count;i++){
    //     cin>>nums[i];
    // }
    // count = 9;
    int nums[9] = {2,5,9,3,1,12,6,8,7};
    stockSpan(nums,9);

    return 1;
}