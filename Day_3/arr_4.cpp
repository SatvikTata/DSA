#include <iostream>
using namespace std;

bool findEle(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return(1);
        }
    }
    return(0);
}

int main(){
    int size, arr[100],key;
    cout<<"Enter the size of the array: ";
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter the key: ";
    cin>>key;

    bool found=findEle(arr,size,key);
    if(found){
        cout<<"The element is present in the array";
    }
    else{
        cout<<"The element is not present in the array";
    }
return 0;
}