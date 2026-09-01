#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

    void segregate0and1(vector<int> &arr) {
        int i = 0, j = arr.size() - 1;

        while (i < j) {
            if (arr[i] == 0) {
                i++;
            }
            else if (arr[j] == 1) {
                j--;
            }
            else {
                swap(arr[i], arr[j]);
                i++;
                j--;
            }
        }
    }
};

int main() {

    vector<int> arr = {0, 1, 1, 0, 1, 0, 0, 1};

    Solution obj;
    obj.segregate0and1(arr);

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    return 0;
}