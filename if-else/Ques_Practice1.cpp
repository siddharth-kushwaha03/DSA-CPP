// Ques 1.Take age as input and tell if person 
// can drive of not 

#include <iostream>
using namespace std ;
int main(){
int age;
cout<<"enter your age: ";
cin>>age;

if(age>18) cout<<"you can drive:";
else cout<<"you can not drive";

}

// 2.take positive integer input and tell if is odd or even ;

#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter your number:";
    cin>>number;
    if(number%2 == 0) cout<<"Even";
    else cout<<"odd";
}

// home work-- Take positive number and tell if it is divisible by 5 or not;


#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter your number :";
    cin>>num;
    if(num%5 == 0) cout<<"Divisible by 5 :";
    else cout<<"not divisible by 5:";
}

// Ques.. Take integer input and print the 
// absolute value of that integer

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    if(n>0) cout<<n;
    else cout<<-n;
}

// ques . Take real number input and check 
// if it is an integer or not 

#include<iostream>
using namespace std;
int main(){
      float x;
      cout<<"Enter a Real no:";
      cin>>x;
      int y=(int)x;
      if(x==y) cout<<"Integer";
      else cout<<"Not Intager";
}   


// ques -- Profit Losss;

#include <iostream>
using namespace std;
int main(){
    int cp;
    cout<<"Enter cost Price";
    cin>>cp;
    int sp;
    cout<<"Enter selling Price";
    cin>>sp;
    if(sp>cp) cout<<"Profit";
        if(sp==cp) cout<<"No Profit,No Loss";

    else cout<<"Loss";
}
////

#include <iostream>
using namespace std;

int main() {
    int cp;
    cout << "Enter Cost Price: ";
    cin >> cp;

    int sp;
    cout << "Enter Selling Price: ";
    cin >> sp;

    if (sp > cp)
        cout << "Profit = " << sp - cp;
    else if (sp == cp)
        cout << "No Profit, No Loss";
    else
        cout << "Loss = " << cp - sp;

    return 0;
}


