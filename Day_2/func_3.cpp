#include <iostream>
using namespace std;

int fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return (fact);
}

int nCr(int n, int r){
    int ans;
    int nfact=fact(n);
    int rfact=fact(r);
    int nmr=fact(n-r);
    ans=nfact/(rfact*nmr);
    return(ans);
}
int main(){
    int n,r;
    cout<<"Enter the value of 'n' and 'r': ";
    cin>>n>>r;
    int ans=nCr(n,r);
    cout<<"The value of nCr is: "<<ans;
return 0;
}