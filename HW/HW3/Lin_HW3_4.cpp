#include <iostream>
using namespace std;

int main(){
    int x, counter=2;
    bool prime=true;
    cout<<"Enter a number: ";
    cin>> x;
    
    if (x==0 || x==1){
        prime = false;
    }
    else if (counter>=x){
        while(counter>0){
            x/counter;
            counter++;
        }
    }

    if (prime ==true){
        cout<<"The number is prime"<<endl;
    }
    else{
        cout<<"This isn't a prime number"<<endl;
    }
}