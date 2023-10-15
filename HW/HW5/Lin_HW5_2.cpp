#include <iostream>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    int num1, num2;
    cout<<"Enter two positive intergers with a difference of at least 10: ";
    cin>>num1>>num2;
    while((num1-num2 && num2-num1)<=10){
        cout<<"Invalid input! Try again: ";
        cin>>num1>>num2;
    }

    if(num1>num2){
        cout<<"Random number between "<<num1<< " and "<< num2<< " is "<<(num1-rand()%(num1-num2+1));
    }else{
        cout<<"Random number between "<<num1<< " and "<< num2<< " is "<<(num2-rand()%(num2-num1+1));
    }
    return 0;
}