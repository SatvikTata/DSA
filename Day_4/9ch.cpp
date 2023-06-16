#include <iostream>
using namespace std;

int getMax(int arr[],int size){
    int maxi=INT_MIN;
    for(int i=0;i<size;i++){
        maxi=max(arr[i],maxi);
    }
    return maxi;
}

int getMin(int arr[],int size){
    int mini=INT_MAX;
    for(int i=0;i<size;i++){
        mini=min(mini,arr[i]);
    }
    return mini;
}


int main(){
    int arr[10]={1,2,34,4,5,6,7,8,9,10};
    int size=10;
    int max=getMax(arr,size);
    int min=getMin(arr,size);
    cout<<max<<' '<<min;

    return 0;
}