#include <iostream>

using namespace std;

int main(){
    string name;
    cout<< "What is your name?" << endl;
    cin >> name;

    cout<< "Hello, " << name;

    double y;
    int a = 5;
    int b = 4;
    int c = 2;
    //can combined it into one int a = 5, b = 4, c=2;

    double x = 3.14;
    cout << "enter a double data: ";
    cin >> y;
    cout << a / c << endl; //2
    cout << x / c << endl; //1.5
    cout << a + b + c / 3 << endl; // 9
    cout << (a + b + c)/3 << endl; //3
    cout << (a + b + c)/3.0 << endl; //3.6666...
    cout << x* y << endl;
    return 0;
}