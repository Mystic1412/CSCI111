#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Enter any number: ";
    cin >> num;
    cout<< "Your last digit is: "<<(num % 10)<<endl;
    cout<< "Your new number is "<< int(num  * .1)<< endl;
    return 0;
}