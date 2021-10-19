#include<iostream>
#include<stack>
using namespace std;

void largestAreaHistogram(int arr[]){
    int l = 7;
    int nextSmallestRight[l];
    int nextSmallestLeft[l];
    int area[l];
    stack<int> st;
    // Next Smallest on Right

    st.push(l - 1);
    nextSmallestRight[l - 1] = 1;   

    for(int i = l - 2;i >= 0;i--){
        while(st.size() > 0 && arr[i] < arr[st.top()]){
            st.pop();
        }
        if(st.empty()){
            nextSmallestRight[i] = l - i;
        }else{
            nextSmallestRight[i] = st.top() - i;
        }
        st.push(i);

    }

    //Cleaning the stack 
    while(!st.empty()){
        st.pop();
    }


    // Next Smallest on Left

    st.push(0);
    nextSmallestLeft[0] = 1;
    for(int i = 1;i < l;i++){
        while(st.size() > 0 && arr[i] < arr[st.top()]){
            st.pop();
        }

        if(st.empty()){
            nextSmallestLeft[i] = i + 1;
        }else{
            nextSmallestLeft[i] = i - st.top();
        }
        st.push(i);
    }


    //Max Area in histogram
    int max = 0;
    for(int i = 0;i < l;i++){
        area[i] = ( nextSmallestLeft[i] * arr[i] ) + ( nextSmallestRight[i] * arr[i] ) - arr[i];
        if(area[i] > max){
            max = area[i];
        }
    }

    cout<<"Maximum area in this histogram is "<<max;


}



int main(){
    int arr[7] = {6,2,5,4,5,1,6};
    largestAreaHistogram(arr);

    return 1;
}