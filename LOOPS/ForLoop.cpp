#include <iostream>
using namespace std;
int main(){
for(int i=0;i<=5;i++){
    cout<<"Hello"<<endl;
}
}
//
#include <iostream>
using namespace std;
int main(){
for(int i=2;i<=5;i++){
    cout<<"Hello"<<endl;
}
}
//
// QUES:Print numbers froom 1 to 100
#include <iostream>
using namespace std;
int main(){
for(int i=1;i<=100;i++){
    cout<<i<<" ";
}
} 

// Ques 2:-- Print all even numbers from 1 to 100.

#include <iostream>
using namespace std;
int main(){
for(int i=1;i<=100;i++){
    if(i%2==0)
    cout<<i<<" ";
}
} 

// ques -- Print the table of 19 
#include <iostream>
using namespace std;
int main(){
    //  for(int i=1;i<=10;i++){
    //     cout<<(i*19)<<" " ;
    //  }
      for(int i=19;i<=190;i+=19){
        cout<<(i)<<" " ;
     }
}

// ques -- print numbers from 'n' to 1

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    // for(int i=n;i>=1;i--)
    // cout<<i<<" ";
for(int i=1;i<=n;i++){
    cout<<n+1-i<<" ";
}
}


// Ques- Display this Ap -2,5,8,11.. upto 'n' terms 

#include <iostream>
using namespace std;
int main(){
int n ;
cout<<"Enter number of terms:";
cin>>n;
for(int i=2;i<=3*n-1;i+=3){
    cout<<i<<" ";
}
}

// 


#include <iostream>
using namespace std;
int main(){
int n ;
cout<<"Enter number of terms:";
cin>>n;
int a=1,r=2;
for(int i=2;i<=n;i++){
    cout<<i<<" ";
    a*=r;
}
}

// Ques-- Print all alphabetes with  the their 
// corresponding ASCII value 


# include <iostream>
using namespace std;
int main(){
    for(int i=65;i<=90;i++){
        cout<<(char)i<<" "<<i<<endl;
    }
}

// Print sum of digits a number 
