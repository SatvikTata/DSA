#include <iostream>
using namespace std;
int main(){
    int n,p=0;
    int i=2;
    cout<<"Enter a number: ";
    cin>>n;
    while(i<n){
        if(n%i==0){
            p=1;
            break;
        }
        i+=1;
    }
    if(p==0){
        cout<<n<<" is a prime number.";
    }
    else{
        cout<<n<<" is not a prime number.";
    }
return 0;
}