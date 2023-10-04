#include <iostream>
using namespace std;

int main(){
    int num, newnum;
    cout<<"Enter a big integer: ";
    cin>> num;
    for (int i=1; i<=4; i++){
        cout<<"Enter a smaller value: ";
        cin>>newnum;
        if(num<=newnum){
            cout<<"Goodbye";
            i=5;
        }
        num =newnum;
    }
    return 0;
}