#include <iostream>
using namespace std;

void swapArr(int arr[],int size){
    int e=size-1;
    for(int i=0;i<size;i++){
        if(i<e){
            int temp=arr[i];
            arr[i]=arr[e];
            arr[e]=temp;
            e--;
        }
        else{
            break;
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
    swapArr(arr,size); // does something
    cout<<"The reversed array is: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}