#include <iostream>
using namespace std;

void arrRev(int arr[],int size){
    int newArr[100];
    int newSize=size;
    for(int i=0;i<size;i++,newSize--){
        newArr[newSize-1]=arr[i];
    }
    for(int i=0;i<size;i++){
        cout<<newArr[i];
    }
}

int main(){
    int arr[100],size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
return 0;
}