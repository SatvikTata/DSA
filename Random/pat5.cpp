#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number of rows you want: ";
    cin>>a;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int k=1;k<=(i*(-2)+(2*a));k++){
            cout<<"_";
        }
        for(int j=i;j>0;j--){
            cout<<j;
        }
        cout<<endl;
    }
return 0;
}