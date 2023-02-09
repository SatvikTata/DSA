#include <iostream>
using namespace std;

void dupli(int arr[],int n){
    int count,newarr[100];
    for(int i=0;i<n;i++){
        count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        newarr[i]=count;
    }
    for(int i=0;i<n;i++){
        if(newarr[i]==2){
            cout<<arr[i]<<" is the duplicate element";
            break;
        }
    }
}

int main(){
    int arr[100];
    int n;
    cout<<"How many elements do you want: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    dupli(arr,n);
return 0;
}