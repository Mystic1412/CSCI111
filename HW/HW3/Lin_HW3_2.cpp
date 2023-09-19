#include <iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter a number: ";
    cin>> x;
    while (x<0){
        cout<<"Enter a POSITIVE number: ";
        cin>>x;
    }

    while (x>0){
        cout<<x<<endl;
        x /=10;

    }
    return 0;
}