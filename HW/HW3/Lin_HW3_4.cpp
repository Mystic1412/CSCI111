#include <iostream>
using namespace std;

int main(){
    int x, counter=2;
    bool prime=true;
    cout<<"Enter a number: ";
    cin>> x;
    
    if (x==0 || x==1){
        prime=false;
    }
    if (x%2==0){prime = false;}
    else{
        while(counter<=x){
            if (counter<= x/counter){
            prime = false;}
    }}


    if (prime ==true){
        cout<<"The number is prime";
    }else{
        cout<<"The number is not prime";
    }
    return 0;
}