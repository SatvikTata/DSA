#include <iostream>
using namespace std;

int power(int a, int b){
    int c=1;
    for(int i=1;i<=b;i++){
        c=c*a;
    }
    return (c);
}

int main(){
    int a,b;
    int c;
    cin>>a>>b;
    c=power(a,b);
    cout<<"The power of the given number is: "<<c;
return 0;
}