// IN the form of number 

// # include<iostream>
// using namespace std;

// int main(){
//    int n=4;
//    for(int i=1; i<=n;i++){  // outer loop
//      for(int j=1;j<=n;j++){
//      cout<<j<< " ";
//    }
//    cout << endl;
//    }

//     return 0;
// }

// IN the form of stars 

// # include<iostream>
// using namespace std;

// int main(){
//    int n=4;
//    for(int i=1; i<=n;i++){  // outer loop
//      for(int j=1;j<=n;j++){
//      cout<<'*'<< " ";
//    }
//    cout << endl;
//    }

//     return 0;
// }


// IN the form of character
# include<iostream>
using namespace std;

int main(){
   int n=4;
   for(int i=0; i<n;i++){  // outer loop
    char ch='A';
     for(int j=0;j<n;j++){ // inner start => line start
     cout<<ch<< " ";
     ch=ch+1;
   }
   cout << endl;
   }

    return 0;
}
