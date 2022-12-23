#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    if (a<b){
        cout<<"A is less then B";
    }
    else if (a==b){
        cout<<"A is equal to B";
    }
    else{
        cout<<"B is less then A";
    }
return 0;
}