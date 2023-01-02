#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number of rows you want: ";
    cin>>a;
    for(int i=0;i<((a*2)-1);i++){
        for(int j=0;j<((a*2)-1);j++){
            int top=i;
            int left=j;
            int right=((2*a)-2)-j;
            int down=((2*a)-2)-i;
            cout<<(a-min(min(top,down),min(left,right)));
        }
        cout<<endl;
    }
return 0;
}