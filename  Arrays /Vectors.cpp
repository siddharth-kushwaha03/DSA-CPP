#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr(5);// index 0 to 4
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}

// or!

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr(5,18);// index 0 to 4
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}

// vector ka size 

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr(5,16);// index 0 to 4
    int n=arr.size();
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}

// 

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr(9,-1);// index 0 to 4
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    arr.push_back(5);// add an element
    arr.pop_back();// remove last element
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}