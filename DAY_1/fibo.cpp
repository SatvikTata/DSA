//fibonacci series 

#include <iostream>
using namespace std;
int main(){
    int num1=0;
    int num2=1;
    int sum;
    int terms;
    cout<<"How many terms do you want: ";
    cin>>terms;
    for(int i=0;i<terms;i++){
        cout<<num1<<" ";
        sum=num1+num2;
        num1=num2;
        num2=sum;
    }
return 0;
}