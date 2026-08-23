#include <iostream>
using namespace std;
void sumit(){
    cout<<"I am sumit"<<endl;
}

void arjun(){
    sumit();
    cout<<"I am arjun"<<endl;
    sumit();
}
void anu(){
 
   cout<<"I am anu"<<endl;
  arjun();
}
int main(){
    anu(); 
} 