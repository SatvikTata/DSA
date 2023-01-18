#include <iostream>
using namespace std;

int arrSum(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return (sum);
}

int main(){
    int size;
    int arr[100];
    cout<<"Enter the size of array: ";
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int sum=arrSum(arr,size);
    cout<<"The sum of all the elements of array is: "<<sum;
return 0;
}