//complement of a number

#include <iostream>
using namespace std;
int main(){
    int n,mask=0;
    cin>>n;
    int ans;
    int com=~n;
    if(n==0){
        ans=1;
    }
    else{
        while(n!=0){
            n=(n>>1);
            mask=(mask<<1)|1;
        }
        ans=com& mask;
    }
    cout<<ans;
return 0;
}