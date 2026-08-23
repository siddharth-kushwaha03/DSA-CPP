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