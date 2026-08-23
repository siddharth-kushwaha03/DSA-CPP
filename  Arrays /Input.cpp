#include <iostream>
using namespace std;

int main() {
int n;
cout<<"Enter Array Size:";
cin>>n;
int arr[n];
cout<<"Enter array Element:";
//Input

for(int i=0;i<=n-1;i++){
    cin>>arr[i];
}
// print the nagative array of element 
for(int i=0;i<=n-1;i++){
    if(arr[i]<0) cout<<arr[i]<<" ";
}

}
