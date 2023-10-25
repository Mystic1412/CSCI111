#include <iostream>
using namespace std;

void printChar(char x, int y){
    for (; y>0; y--){
        cout<<x<<" ";
    }
}
int main(){
    printChar('x', 9);
    return 0;
}