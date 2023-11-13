#include <iostream>
using namespace std;
//IF ELSE STATEMENTS
int main(){
    int age;
    cout <<"What is your age?" << endl;
    cin >> age;

    if (age > 100){
        cout << "liar!"<< endl;
    }
    else{
        cout << "Thanks";
    }
    return 0;
}