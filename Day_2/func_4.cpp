//No of Set bits

#include <iostream>
#include <bitset>
#include <string>
using namespace std;

int noOfSetBits(int a){
    int count=0;
    while(a!=0){
        int abc=a%10;
        a=a/10;
        if(abc==1){
            count++;
        }
    }
    return (count);
}

int decToBin(int a,int b){
    string as=bitset<8>(a).to_string();
    string bs=bitset<8>(b).to_string();
    a=stoi(as);
    b=stoi(bs);
    int ab=noOfSetBits(a);
    int ba=noOfSetBits(b);
    int sum=ab+ba;
    return(sum);
}

int main(){
    int a,b;
    cout<<"Enter the value of a and b: ";
    cin>>a>>b;
    int count=decToBin(a,b);
    cout<<"The number of set bits in a and b are: "<<count;
return 0;
}   