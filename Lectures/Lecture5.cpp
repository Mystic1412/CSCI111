#include <iostream>

using namespace std;
//Learning abt conditions :D This time it's learning about 'else if' now
int main(){
    double grade;
    cout<< "Enter your grade: ";
    cin >> grade;
    if (grade >= 90) {cout <<"That's an A" << endl;}
    else if (grade >= 80) {cout <<"That's an B"<< endl;}
    else if (grade >= 70) {cout <<"That's an C"<< endl;}
    else if (grade >= 60){cout <<"That's an D"<< endl;}
    else {cout <<"That's a sign of getting disowned!"<< endl;}
    return 0;
}

//go to lecture 4 for while statements