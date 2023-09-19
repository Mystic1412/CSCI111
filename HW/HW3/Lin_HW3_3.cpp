#include <iostream>
using namespace std;

int main() {
    int x, sum, product,y=0;
    cout<<"Enter a number: ";
    cin>> x;
    sum =x;
    product=x;
    while (x>0){
       x-=1;
       y += x;
    }
    cout<<"The sum is: "<<sum+y<<endl;
    cout<<"The product is: "<< product*y;
    return 0;
}