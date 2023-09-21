#include <iostream>
using namespace std;

int main(){
    int x, counter=2;
    bool prime=true;
    cout<<"Enter a number: ";
    cin>> x;

    if (x==0||x==1){
        prime=false;
    }
    while(counter<= x/2){
        if (x%2==0){
            prime=false;
        }
        counter++;
    }
    if (prime==false){cout<<"It's not a prime number";
    }else {"Its a prime number";}
    return 0;
}