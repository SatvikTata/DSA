//unique element in the array

#include <iostream>
using namespace std;

void uni(int arr[],int newarr[],int n){
    int count;
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
        if(newarr[i]==1){
            cout<<arr[i]<<" is the unique element in the array";
            count=100;
            break;
        }
    }
    if(count!=100){
        cout<<"There are no unique elements in the array.";
    }
}

int main(){
int arr[100];
int n;
int newarr[100];
cout<<"How many elements do you want: ";
cin>>n;

for(int i=0;i<n;i++){
    cin>>arr[i];
}

uni(arr,newarr,n);

return 0;
}