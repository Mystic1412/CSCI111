#include <iostream> 
using namespace std;

bool isPrime(int x){
    bool Prime = true; int counter = 2;
    if (x==0 || x==1){
        Prime = false;
    }
    else if (x>=2){
        while(counter<x){
            if (x%counter==0){
                Prime =false;
            }
            counter++;
        }
    }

    if (Prime ==true){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    return Prime;
}

int main(){
    cout<<isPrime(17);
    return 0;
}