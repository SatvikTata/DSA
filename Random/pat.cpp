#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number of rows you want: ";
    cin>>a;
    for(int i=1;i<=a;i++){
        for(int j=a;j>i;j--){
            cout<<" ";
        }
        for(int k=1;k<=((2*i)-1);k++){
            cout<<"*";
        }
        cout<<endl;
    }
return 0;
}