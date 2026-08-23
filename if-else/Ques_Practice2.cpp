// Ques-1.Take Positive integer input and print 
// __ if number is dividible by 5
// __ if number is dividibl by 3
// __ if number is dividibl by 5 & 3both
// __ if number is dividibl by 5 or 3


#include <iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter a number:";
   cin>>n;

   if(n%5==0 and n%3==0) cout<<"Anuj";
   else if(n%5==0) cout<<"Suraj";
   else if(n%3==0) cout<<"Sakshi";
   else cout<<"Ritesh";
}

// Q.4 digit number 
#include <iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter a number:";
   cin>>n;
   if(n>=1000 and n<=9999) cout<<"4 digit number";
else cout<<"Not a 4 digit number";
}

// Ques-- Take positive integer input and 
// tell if it divisible by 5 0r 3.

#include <iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter a number:";
   cin>>n;
   if(n%5==0 or n%3==0) cout<<"Divisible by 5 and 3";
else cout<<"Not divisible";
}

// Ques.Take 3 positive integer input and tll if
// they can be the sides of a triangle or not 


#include <iostream>
using namespace std;
int main(){
   int a,b,c;
   cout<<"Enter a 3  number:";
   cin>>a>>b>>c;
   if(a+b>c and a+c>b and b+c>a) cout<<"Valid Traingle ";
else cout<<"INalid Traingle";
}



// Ques -- Take 3 positive integer anput and
// print the greatest of them 

#include <iostream>
using namespace std;
int main(){
   int a,b,c;
   cout<<"Enter a 3  number:";
   cin>>a>>b>>c;
   if(a>=b and a>=c) cout<<" A is Greater ";
else if(b>=a and b>=c) cout<<" B is greater ";
else cout<<(" c is greater");
}


//             home work
//   - Q.TAke integer input and tell if its 
// mangtitude is smaller than 69 or not.

// Q-- Take 3 positive integer input and print 
// the least of them 

 // given a point (x,y) write a program to find out if it lies 
// in the 1st Quadrant 2nd Quardnat ,3rd Quadrant ,4th Qurdant,
// om the x-axis,y-axis,or at the origin 