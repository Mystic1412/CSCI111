#include <iostream>
using namespace std;

int num_of_digits(int n){
    if (n< 10) return 1;
    return num_of_digits(n/10)+1;
}

int main(){
    cout<<num_of_digits(167324);
    return 0;
}