#include <iostream>
using namespace std;

int factorial(int n){
    if (n<=1) return 1;
    return n+factorial(n-1);
}

void triangle(int row){
    if (row <1) return; //<-- return; will return nothing basically void
    triangle(row-1);
    for (int i=1; i<=row; i++){
        cout<< "*";
    }
    cout<<endl;
}

int numDigits(int n){
    if (n<=9)return 1;
    return numDigits(n/10)+1;
}

int firstDigit(int n){
    if (n<10)return n;
    return firstDigit(n/10);
}
int maxDigit(int n){
    if (n<10) return n;
    int rc =maxDigit(n/10);
    if (rc>n%10) return rc;
    else return n%10;
}
int main(){
    cout<<factorial(3)<<endl;
    triangle(4);
    cout<<numDigits(31415)<<endl;
    cout<<numDigits(98763)<<endl;
    cout<<firstDigit(31415)<<endl;
    cout<<maxDigit(31415)<<endl;
    return 0;

}