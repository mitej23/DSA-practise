#include <bits/stdc++.h>
using namespace std;

namespace mitej {
    int val = 10;
}

int main(){
    double val = 10.20;
    // Namespace
    cout<<val<<endl<<mitej::val;

    // Array container

    array<int, 4> arr; // -> {? , ? , ? } This will add garbage values to array
    array<int, 3> arr1 = {0}; // -> By doing this we wil initializing the first item this make other items as 0
    array<int, 3> arr2 = {1}; // {1,0,0}
    array<int, 5> fillarr;
    fillarr.fill(99); // It will fill the entire array with the value
    cout<<fillarr.at(3);

    // Iterators

    //begin() -> Points to starting element
    //end()   -> After the last element
    //rbegin()-> Points to the last element
    //rend()  -> Before the first element

    array<int , 5> newarr = {2,3,4,5,6};
    
    for(auto it = newarr.begin(); it != newarr.end(); it++){
        cout<<*it<<"-";
    }
    cout<<endl;
    // reverse_iterator
    for(auto it = newarr.rbegin(); it != newarr.rend(); it++){
        cout<<*it<<"-";
    }
    cout<<endl;

    // for each
    for(auto it : newarr) {
        cout<<it<<"-";
    }
    cout<<endl;

    string s = "asdfadfasf";
    for(auto it : s){
        cout<<it;
    }
    cout<<endl;

    // Vectors

    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2); 
    vec.emplace_back(3); // It will add the element at the end of the vector but faster than [push_back]
    cout<<vec.size()<<endl;

    vec.pop_back(); // Removes the last element
    vec.clear(); // Removes all elements
    vec.assign(10,2); // Assigns 10 elements with value 2

    vector<int> vec2(vec.begin(), vec.end()); // Copy the vector) -> Last elemnt excluded
    vector<int> vec3(vec); // Copy the vector
    cout<<vec2.size()<<endl;

    // 2D Vectors
    cout<<"2D Vectors"<<endl<<endl;

    vector<vector<int>> newvec;

    vector<int> mitej1;
    mitej1.push_back(1);
    mitej1.push_back(2);

    vector<int> mitej2;
    mitej2.push_back(3);
    mitej2.push_back(4);

    newvec.push_back(mitej1);
    newvec.push_back(mitej2);

    for(auto it : newvec){
        for(auto it2 : it){
            cout<<it2<<"-";
        }
        cout<<endl;
    }

    // vector 10 X 20

    vector<vector<int>> newvec2(10, vector<int>(20));

    vector<int> arrNotDynamic[4]; //array of vectors is created.

    // 3D Vectors
    cout<<"3D Vectors"<<endl<<endl;
    vector<vector<vector<int>>> newvec3(10, vector<vector<int>>(20, vector<int>(30)));
    

    // -    -   -   -   -   -   -   -   Lecture 1 - -   -   -   -   -   -

    //Set
    //It is in ascending order

    arr[] = {1,2,1,2,3,4};
    set<int> s;
    for(int i = 0; i < 6; i++){
        s.insert(arr[i]); //It has log(n) time complexity
    }
    cout<<s.size()<<endl;

    // st.begin() -> It will point to the first element 
    // st.erase(st.begin,st.begin+2) -> It will remove the first 2 elements)
    // st.erase(5) -> It will remove the element will value 5 



    
    return 1;    

}