#include <iostream>
using namespace std;

int main(){
    int fTemp, cTemp;
    cout<< "What is your temperature? (in Fahrenheit)"<< endl;
    cin>> fTemp;

    cTemp =(fTemp-32) * 5/9;

    cout<< cTemp << " degrees Celsius"<<endl;
    if (cTemp>37){
        cout<< "You have a fever. Drink lots of liquids and go to bed."<<endl;
    }
    else{
        cout<< "You don't have a fever. Go study."<<endl;
    }
    return 0;
}