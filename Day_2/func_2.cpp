#include <iostream>
using namespace std;

int ooe(int a){
    if(a%2==0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    if(a==0){
        cout<<"The given number is 0, which is not even or odd";
    }
    else{
        int ans=ooe(a);
        if(ans==1){
            cout<<"The given number is Even";
        }
        else{
            cout<<"The given number is Odd";
        }
    }
return 0;
}