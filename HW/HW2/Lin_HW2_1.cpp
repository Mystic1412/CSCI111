#include <iostream>
using namespace std;

int  main() {
    double productA, productB;
    cout<< "What is the price of your product A?"<< endl;
    cin >> productA;
    cout<< "What is the price of your product B?"<< endl;
    cin>> productB;
    cout << "Your total is $"<<(productA + productB) + ((productA + productB) * .08875);
    return 0;
}