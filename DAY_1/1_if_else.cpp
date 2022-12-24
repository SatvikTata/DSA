#include <iostream>
using namespace std;
int main(){
    char a;
    cout<<"Enter the character: ";
    cin>>a;
    if(a>=48 && a<=57){
        cout<<"Numeric Char";
    }
    else if(a>=65 && a<=90){
        cout<<"Uppercase Char";
    }
    else if(a>=97 && a<=122){
        cout<<"Lowercase Char";
    }
    else{
        cout<<"Special Char";
    }
return 0;
}