#include <iostream>
using namespace std;
int main(){
    int arr[15];
    for(int i=0;i<15;i++){
        cin>>arr[i];
    }
    for(int i=0;i<15;i++){
        cout<<arr[i]<<" ";
    }

    int sizeofArray;
    sizeofArray=sizeof(arr)/sizeof(int);
    cout<<endl<<sizeofArray<<endl;
return 0;
}