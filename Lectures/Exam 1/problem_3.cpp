#include <iostream> 
#include <cmath>
using namespace std;

int main(){
    int x = 6, y = 0, z= 3;
    double a = 5, b= 4.0;
    cout << x << x * a << endl;
    cout << (y % z) << "\nn\n" << z / x << endl;
    if ((a < x) && (b > y)) cout << "Hello" << endl;
    for ( ; x <= 9; x++) cout << x;
    cout << endl ;
    cout << sqrt (b) * sqrt (b) / x * z << endl;

    return 0;
}