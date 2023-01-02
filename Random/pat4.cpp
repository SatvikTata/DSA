#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number of rows you want: ";
    cin>>a;
    int count=1;
    for(int i=1;i<=a;i++){
        if(i%2==0){
            count=0;
        }
        else{
            count=1;
        }
        for(int j=1;j<=i;j++){
            if(i%2==0){
                if(j%2==0){
                    cout<<count;
                    count--;
                }
                else{
                    cout<<count;
                    count++;
                }
            }
            else{
                if(j%2!=0){
                    cout<<count;
                    count--;
                }
                else{
                    cout<<count;
                    count++;
                }
            }
        }
        cout<<endl;
    }
return 0;
}