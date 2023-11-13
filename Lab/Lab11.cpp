#include <iostream>
using namespace std;
//CREATING YOUR OWN FUNCTIONS
double tax(double price){
    double low_tax = 0.05, high_tax=0.06, total;

    if (price<=100){
        return price*low_tax;
    }else{
        return price*low_tax + (price-100)*high_tax;
    }
}

int oddLessEven(int x){
    int odd=0, even=0, difference;
    for (; x>=0; x/10){
        if(x%2==0){
            even += x%10;
        }
        else{
            odd += x%10;
        }
    }
    difference = odd-even;
    return difference;
}

int main(){
    cout<<"Total tax: $"<<tax(200)<<endl;
    cout<<1234%10<<endl;
    cout<<oddLessEven(23)<<endl;
    cout<<oddLessEven(1234)<<endl;
    cout<<oddLessEven(777)<<endl;
    cout<<"Hey";
    return 0;
}