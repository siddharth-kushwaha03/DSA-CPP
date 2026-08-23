// Ques1-Print all odd numbers divisible by 3 from 1 to 100;

#include <iostream>
using namespace std;
int main(){
    
    for(int i =1;i<100;i++ ){
        if(i%2==1 && i%3==0)
    cout<<"n";
    }
     
}

// Ques factorial of number 

#include <iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter a number:";
    cin>>n;
    int fact =1;
    for(int i=1;i<=n;i++){
        fact *=i;
    }
    cout<<fact;
}