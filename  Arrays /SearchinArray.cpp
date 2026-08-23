#include <iostream>
using namespace std;

int main() {
    int arr[]={10,90,78,56,99,98,9};
    int n =sizeof(arr)/4;
    int target=15;
    bool flag=false;// false means not present
    for(int i=0;i<n;i++){
        if(arr[i]==target)
        flag=true; // true means present
        break;
    }
    if(flag==true) cout<<"Element found"<<endl;
    else cout<<"Element Not Found"<<endl;
}  