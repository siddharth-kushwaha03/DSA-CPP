// #include <iostream>
// using namespace std;

// int main(){
//   int n= 10;
//   for(int i=1;i<=n;i++){
//     cout <<i<< " ";
//   }
//   cout << endl; 
//     return 0;
// }

//  ques-- Sum of numbers from 1 to n.

// #include <iostream>
// using namespace std;

// int main(){
//   int n= 10;
//   int sum=0;

//   for(int i=1;i<=n;i++){
//     sum+=i;
//     // if(i==6){
//     //     break;
//     // }
//   }
//   cout<< "sum=" << sum << endl;  
//     return 0;
// }






// ques - sum of all odd numbers from 1 to n 

#include <iostream>
using namespace std;

int main(){
  int n = 10;
  int sum= 0;
  for(int i =1;i<=n;i++){
    if(i%2!=0){
     sum+=i;
    }
  }
  cout <<"sum=" <<sum<< endl; 
    return 0;
}
