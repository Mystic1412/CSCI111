#include <iostream>
using namespace std;

int main(){
    int x, y;
    cout<<"Enter two positive intergers: ";
    cin>> x>>y;
    if (x>y){
        for (int counter=0;counter<y;counter++){
            cout<<"X";
        }
    }
    else if (x<y)
    {
        for (int counter=0;counter<x;counter++){
            cout<<"X";
        }
    }
    else{
        for (int counter=0;counter<x;counter++){
            cout<<"X";
        }
    }
    return 0;
}