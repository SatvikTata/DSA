#include <iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter the number of rows: ";
    cin>>r;
    for (int i=1;i<=r;i++){
        for (int j=0;j<r;j++){        
            cout<<i;
        }
        cout<<"\n";
    }
return 0;
}