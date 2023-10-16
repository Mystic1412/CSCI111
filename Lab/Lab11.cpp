#include <iostream>
using namespace std;

double tax(double price){
    double low_tax = 0.05, high_tax=0.06, total;

    if (price<=100){
        return price*low_tax;
    }else{
        return price*low_tax + (price-100)*high_tax;
    }
}

int main(){
    cout<<"Total tax: $"<<tax(200)<<endl;
    return 0;
}