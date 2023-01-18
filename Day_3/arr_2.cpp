#include <iostream>
using namespace std;

int getMin(int arr[],int size){
    int min=INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<=min){
            min=arr[i];
        }
    }
    return(min);
}

int getMax(int arr[],int size){
    int max=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>=max){
            max=arr[i];
        }
    }
    return(max);
}

int main(){
    int arr[100];
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int max=getMax(arr,size);
    int min=getMin(arr,size);

    cout<<"The max value in the given array is: "<<max<<endl;
    cout<<"The min value in the given array is: "<<min<<endl;
return 0;
}