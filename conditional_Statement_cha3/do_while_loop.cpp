// #include <iostream>
// using namespace std;

// int main(){
//   int n = 10;
//   int i= 1;
//  do{
//     cout<< i << " ";i++;
//  } while(i<=n);
//  cout << endl;

//     return 0;
// }




//  check if a. number is priem or not  
// check if a number is prime or not

#include <iostream>
using namespace std;

int main(){

    int n = 7;
    bool isPrime = true;

    for(int i = 2; i <= n-1; i++){

        if(n % i == 0){
            isPrime = false;
            break;
        }

    }

    if(isPrime){
        cout << "Prime Number";
    }
    else{
        cout << "Not Prime Number";
    }

    return 0;
}

