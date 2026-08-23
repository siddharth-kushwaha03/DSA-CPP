#include <iostream>
using namespace std;

// Function Definition
int minOfTwo(int a, int b) // parameter 
{
    if (a < b){
        return a;
    }
    else{
        return b;
    }
}

int main()
{
    cout << "min =" << minOfTwo(5,3)<<endl; // arguments
        return 0;
}