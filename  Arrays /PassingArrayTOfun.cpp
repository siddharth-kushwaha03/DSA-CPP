#include <iostream>
using namespace std;
void change(int x){
    x=20;
}

int main() {
    int x=6;
    change(x);
    cout<<x<<endl;
}
//

#include <iostream>
using namespace std;
void change(int y[]){
    y[0]=20;
}

int main() {
    int x[]={6,1,2};
    change(x);
    cout<<x[0]<<endl;
}