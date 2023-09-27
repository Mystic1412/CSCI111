#include <iostream>
using namespace std;

int main() {
    int num, counter=1;
    cout<<"Enter a postive number: "<<endl;
    cin>>num;
    while (num<0){
        cout<<"enter a postive number: "<<endl;
        cin>>num;
    }

    while (counter<=20){
        cout<<counter<<" x "<<num<<" = "<<num*counter<<endl;
        counter++;

    }

    //Previous example but using for loop instead
    cout<<"For Loop HERE"<<endl;
    for (counter=1; counter<=20; counter++){
        cout<<counter<<" x "<<num<<" = "<<num*counter<<endl;
    }


    for (int c=5; c<8; c++){
        cout<<c;
    }
    cout<<endl;


    //Exercise 1
    for(int star=20;star>0; star--){
        cout<<"*";
    }
    return 0;
}