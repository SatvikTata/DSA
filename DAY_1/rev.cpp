// reverse of a number

#include <iostream>
using namespace std;
int main(){
    long int x;
    cout<<"Enter a number: ";
    cin>>x;
    long int rev=0;
    int i=0;
    while(x!=0){
        int digit=x%10;
        if((rev>INT_MAX/10)||(rev<INT_MIN/10)){
            rev=0;
            break;
        }
        x=x/10;
        rev=(rev*10)+digit;
        i++;
    }
    cout<<"The reverse of the given number is: "<<rev;
return 0;
}