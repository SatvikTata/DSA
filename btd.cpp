//binary to decimal conversion

#include <iostream>
#include <math.h>

using namespace std;
int main(){
    int n,i=0;
    int ans=0;
    cout<<"Enter the binary number: ";
    cin>>n;
    while(n!=0){
        int digit=n%10;
        ans=(digit*pow(2,i))+ans;
        i++;
        n=n/10;
    }
    cout<<"The decimal equivalent is: "<<ans;
return 0;
}