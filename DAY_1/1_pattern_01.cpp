#include <iostream>
using namespace std;
int main(){
    int r,space,j,start;
    cin>>r;
    int i=1;
    while(i<=r){
        space=r-i;
        while(space){
            cout<<" ";
            space-=1;
        }
        j=1;
        while(j<=i){
            cout<<j;
            j+=1;
        }

        start=i-1;
        while(start){
            cout<<start;
            start=start-1;
        }
        cout<<"\n";
        i+=1;
    }
return 0;
}