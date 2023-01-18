#include <iostream>
using namespace std;

void swapAlternate(int arr[],int size){
    for(int i=0;i<size-1;i++){
        if(i%2==0){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
}

int main(){
    int arr[100],size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    for(int i=0;i<size;i++){
    cin>>arr[i];
}

swapAlternate(arr,size);

cout<<"After swapping alternate elements: "<<endl;
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
return 0;
}