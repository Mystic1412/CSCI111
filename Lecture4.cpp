#include <iostream>
using namespace std;

int main() {
/*    int ans;
    cout << "1 + 1 = ";
    cin >> ans;

    if (ans == 2){
        cout << "You are correct!";
    }
    else{
        cout << "You're wrong, LOSER!";
    }
*/

    int num1, num2;

    cout<< "Enter 2 postive number: "<<endl;
    cin >> num1 >> num2; //combines inputs by putting a >> inbetween them

    while (num1 <=0 || num2 <=0){ //keeps looping it until it's true
        cout << "Your input is bad! Try again: \n";
        cin >> num1 >> num2;
         
    }

        cout << "Sum: "<< num1 + num2<< endl;
        cout<< "Product is "<< num1 * num2<<endl;
        return 0;

    return 0;//stops the code
}

