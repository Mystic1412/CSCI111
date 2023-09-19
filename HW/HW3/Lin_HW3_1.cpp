#include <iostream>

using namespace std;

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>> num;

    while ((num%5)!= 0){
        cout<<"Please enter a number divisible by 5."<<endl<<"Try again!"<<endl;
        cin>>num;
    }

    cout<<num<<"/5 is "<<num/5;
    return 0;
}