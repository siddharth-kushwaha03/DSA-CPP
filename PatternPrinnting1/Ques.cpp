// print the given pattern 
//  "* * * * *"
//  "* * * * *"
//   "* * * * *"

#include <iostream>
using namespace std;
int main(){
    for(int i=1;i<=3;i++){
     for(int j=1;j<=5;j++ ){
      cout<<"* ";
    }
    cout<<endl;
}
}
// same code user se input lo 

#include <iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter rows and coloumns";
    cin>>m>>n;
    for(int i=1;i<=m;i++){
     for(int j=1;j<=n;j++ ){
      cout<<"* ";
    }
    cout<<endl;  
}
}

// Ques 2 -- Print the given pattern 
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4 number square 

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int  j=1;j<=n;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

// Ques -- aplhabate Square 
// A B C D
// A B C D

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int  j=1;j<=n;j++){
            cout<<(char)(j+64)<<" ";
        }
        cout<<endl;
    }
}

// Ques -- aplhabate Square 
// a b c d
// a b c d

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int  j=1;j<=n;j++){
            cout<<(char)(j+96)<<" ";
        }
        cout<<endl;
    }
}

// print the given pattern 
// A A A A A
// B B B B B 
// C C C C C 

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int  j=1;j<=n;j++){
            cout<<(char)(i+64)<<" ";
        }
        cout<<endl;
    }
}

// print the given pattern 
//a a a a 
// B B B B 
//c c c c 
// D D D D


#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i%2==0) cout<<(char)(i+64)<<" ";
            else cout<<(char)(i+96)<<" ";
        }
        cout<<endl;
    }
   

}

// Print the given pattern star traingle 
// *
// **
// ***
// ****

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    for(int i=1;i<=n;i++){
      for(int j=1;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
    }
}

// print the number triangle 


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    for(int i=1;i<=n;i++){
      for(int j=1;j<=i;j++){
        cout<<j;
    }
    cout<<endl;
    }
}


// ques-- Star triangle horzontally flipped

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    for(int i=1;i<=n;i++){
      for(int j=1;j<=n+1-i;j++){
        cout<<"*";
    }
    cout<<endl;
    }
}
 

// print  Hollow REctangle 


#include <iostream>
using namespace std;
int main(){
   int m,n;
   cout<<" Enter row and coloumns:";
   cin>>m>>n;
   for(int i=1;i<=m;i++){
    for(int j=1;j<=n;j++){
        if(i==1 || i==m || j==1 || j==n) cout<<"* ";
        else cout<<" ";
    }
      cout<<endl;
   }
}

// star plush 

#include <iostream>
using namespace std;
int main(){
   int n;
   cin>>n;
   int mid =n/2+1;
   for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if( i==mid || j==mid) cout<<"*"<<" ";
        else cout<<" "<<" ";
    }
      cout<<endl;
   }
}

// 

// print thw binary triangle

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        if((i+j)%2==0) cout<<1<<" ";
        else cout<<0<<" ";
    }
    cout<<endl;
    }
}


// ques-- star triangle vertically flipped 
 
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        // spaces
        for(int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        // stars
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}

// 

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    for(int i = 1; i <= n; i++) {
        // spaces
        for(int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for(int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }
}

// Rohombus pattern 

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    for(int i = 1; i <= n; i++) {
        // spaces
        for(int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for(int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }
}
