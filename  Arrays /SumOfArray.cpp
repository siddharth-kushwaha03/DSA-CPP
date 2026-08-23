#include <iostream>
using namespace std;

int main() {
    int arr[]={1,12,15,14,48,45,4,8};
    int n = sizeof(arr)/4;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        cout<<sum;
    }
