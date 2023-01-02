#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number of rows you want: ";
    cin>>a;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a+1-i;j++){
            cout<<"*";
        }
        for(int k=1;k<=((i*2)-2);k++){
            cout<<" ";
        }
        for(int j=1;j<=a+1-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int k=1;k<=((i*(-2))+(2*a));k++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
return 0;
}