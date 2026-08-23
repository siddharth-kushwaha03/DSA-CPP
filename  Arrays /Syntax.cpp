#include <iostream>
using namespace std;
int main(){

    int marks[]={74,96,91,57,62};

    cout<<marks[2]<<endl;
    marks[2]=23;  // update value 
    cout<<marks[2]<<endl;

    cin>>marks[2];// input 
    cout<<marks[2]<<endl;

} 

// size of array  

#include <iostream>
using namespace std;
int main(){

    int marks[]={74,96,91,57,62,23,22,29};
    
    //cout<<size(marks)<<endl;// giving error on old cpp version
    
    cout<<sizeof(marks)/4<<endl;// ye ek baar  m 4 bit store karta hai 
    
} 

// kal start 41:32 se 








