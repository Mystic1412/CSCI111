#include <iostream>
using namespace std;

int catEars(int cats){
    if (cats<=1) return 2;
    return catEars(cats-1)+2;
}

int main(){
    cout<<catEars(6)<<" cat ears";
    return 0;
}