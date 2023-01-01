#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number of rows: ";
    cin>>a;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            if(j==i){
                for(int k=j;k>0;k--){
                    cout<<char(k+64);
                }
            }
            else{
                cout<<char(j+64);
            }
        }
        cout<<endl;
    }
return 0;
}