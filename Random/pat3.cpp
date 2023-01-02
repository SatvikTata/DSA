#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number of rows you want: ";
    cin>>a;
    for(int i=1;i<=a;i++){
        if(i<=a/2){
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
        }
        else{
            for(int j=a;j>=i;j--){
            cout<<"*";
        }
        }
        cout<<endl;
    }
return 0;
}