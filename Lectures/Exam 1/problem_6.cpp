#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin >> n;

    for(int r=1;r<=n; r++){
        for(int c=1; c<=2*n-1; c++){
            if(c>=r && c+r<=2*n){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}