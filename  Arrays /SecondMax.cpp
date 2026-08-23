#include <iostream>
#include <climits>
using namespace std;

int main() {

    int arr[] = {10, 90, 78, 56, 99, 98, 9};

    int n = sizeof(arr) / sizeof(arr[0]);

    int mx = INT_MIN;

    // Find maximum
    for (int i = 0; i < n; i++) {
        if (arr[i] > mx)
            mx = arr[i];
    }
    int smx = INT_MIN;

    // Find second maximum
    for (int i = 0; i < n; i++) {
        if (arr[i] > smx && arr[i] != mx)
            smx = arr[i];
    }

    cout << mx << " " << smx << endl;
}