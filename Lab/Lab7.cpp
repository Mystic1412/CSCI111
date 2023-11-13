#include <iostream>
using namespace std;
//FOR LOOPS
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
    cout<<endl;

    //Exercise 2
    for(int star=20;star>0; star--){
        cout<<"*"<<endl;
    }
    cout<<endl;

    //Exercise 3
    for(int n=12345;n>0; n=n/10){
        cout<<n<<endl;
    }
    cout<<endl;

    //Exercise 4
    for(int n=12345; n>0;n=n/10){
        cout<<n%10;
    }
    cout<<endl;

    //Nested for loops
    for (int r =10; r>0;r--){
        for(int c=0;c<10;c++){
            cout<<c;
        }
        cout<<endl;
    }

    return 0;
}