#include <iostream>
using namespace std;

int main() {
    int arr[]={10,90,78,56,99,98,9};
    int n =sizeof(arr)/4;
    int max=0;
    for (int i=0;i<n;i++){
        if(arr[i]>max) max=arr[i];
    }
    cout<<max;
}

//

#include <iostream>
using namespace std;

int main() {
    int arr[]={-90,-80,-78,-56,-99,-98,-9};
    int n =sizeof(arr)/4;
    int max=INT_MIN;
    for (int i=0;i<n;i++){
        if(arr[i]>max) max=arr[i];
    }
    cout<<max;
}

// print the min element in array 

#include <iostream>
using namespace std;

int main() {
    int arr[]={10,90,78,56,99,98,9};
    int n =sizeof(arr)/4;
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>mx) mx=arr[i];
    }
    cout<<mx;
}