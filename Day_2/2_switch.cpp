#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a one digit number: ";
    cin>>a;

    switch (a)
    {
    case 1:
    cout<<"The number is one.";
    break;
    
    case 2:
    cout<<"The number is two.";
    break;

    default:
    cout<<"This is default case.";
    break;
    }
return 0;
}