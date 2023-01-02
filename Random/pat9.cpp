#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number of rows you want: ";
    cin>>a;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a;j++){
            if(i==1 || i==a){
                cout<<"*";
            }
            else{
                cout<<"*";
                for(int k=1;k<=a-2;k++){
                    cout<<"_";
                }
                cout<<"*";
                break;
            }
        }
        cout<<endl;
    }
return 0;
}