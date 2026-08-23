#include <iostream>
using namespace std;
int main(){
  int x=4,y=0,z;
  while(x>=0){
    if(x==y)
    break;
    else
    cout<<x<<" "<<y<<endl;
    x--;
    y++;
  } 
  }

  // Ques count digit of a number 

#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int count =0;
  if(n==0) count++;
  while(n!=0){
    n/=10;
    count++;
  }
  cout<<count;
}

//  Print sum of digits a number 

#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int sum =0;
  while(n !=0){
  int lastDigit = n%10;
sum+= lastDigit;
  }
  n/=10;
  cout<<sum;
}

// Reverse of a number 

#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int rev=0;
  while(n !=0){
  rev *=10;
  rev+=(n%10);
  }
  n/=10;
  cout<<rev;
}
