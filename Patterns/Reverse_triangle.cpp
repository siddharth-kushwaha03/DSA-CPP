#include <iostream>
using namespace std;

int main() {
int n=4;
   for(int i=0; i<n; i++){
    for(int j=i+1;j>0;j--){
    cout <<j<< " ";   
}
cout << endl;
   }
return 0;

}

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