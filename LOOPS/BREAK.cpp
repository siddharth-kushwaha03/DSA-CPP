
#include <iostream>
using namespace std;
int main(){
for(int i=1;i<=10;i++){
     if(i==5) break;
    cout<<i<<" ";
    // if(i==5) break;
}
}

// 
#include <iostream>
using namespace std;
int main(){
for(int i=1;i<=20;i++){
     if(i%4==0) continue;
    cout<<i<<" ";
    // if(i==5) break;
}
} 


// Ques-- Wap to print all the factor of a given number..

#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter a number:";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
}
/// same code but diffrent type se 
#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter a number:";
    cin>>n;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<i<<" "<<n/i<<" ";
        }
    }
}

// wap to check if a given numbeer is prime or not .

#include <iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter a number:";
    cin>>n;
    int factors = 0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
        factors++;
        }
    }
    if(factors==1) cout<<"Neither Prime nor composite:";
  else if(factors >=3)cout<<"Composite number";
  else cout<<"Prime number:";
} 