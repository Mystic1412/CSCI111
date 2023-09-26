#include <iostream>
using namespace std;

int main(){
    int x, counter=2;
    bool prime=true;
    cout<<"Enter a number: ";
    cin>> x;

    //check for negative
    while (x<0){
        cout<<"Enter a postive number: ";
        cin>>x;
    }

    //check for 0 and 1 since they're both not prime number
    if (x==0 || x==1){
        prime = false;
    }
    else if (x>=2){
        while(counter<x){
            if (x%counter==0){
                prime =false;
            }
            counter++;
        }
    }

    if (prime ==true){
        cout<<"The number is prime"<<endl;
    }
    else{
        cout<<"This isn't a prime number"<<endl;
    }
    return 0;
}