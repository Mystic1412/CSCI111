#include <iostream>
using namespace std;

int main(){
    int x,y;
    cout<<"Enter a numbers:";
    cin>>x>>y;
    for (int r=1; r<=x;r++){//repeats some amount of * in a row x times
        for (int c = 1; c<=y; c++){ //some amount of *
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}