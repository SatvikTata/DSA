#include <iostream>
using namespace std;
int main(){
    int n,count;
    cin>>n;
    for(int i=1;i<=n;i++){
        count=n+1-i;
        for(int j=1;j<=n;j++){
            if(j<=count){
                cout<<j;
            }
            else{
                cout<<"X";
            }
        }
        for(int j=n;j>0;j--){
            if(j>count){
                cout<<"X";
            }
            else{
                cout<<j;
            }
        }
        cout<<"\n";
    }
return 0;
}