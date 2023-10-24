/*
C++ call function "by value":
 - stop work on current task T, switches to function.
 - create a variable for each parameter
 - calculates arguments and photocpies these values as intial values of parameters
 - performs block of function until it reaches a return.
 - return to work on T, replace the funciton call by any returned answer.
 - Notice changes to function parameters are temporary and not seem anywhere outside the function

*/
/*
C++ can also call by refrence

*/

#include <iostream>
using namespace std;

void swap(int &x, int &y){
    int temp =x;
    x = y;
    y = temp ;    
}

int main(){
    int myScore=0, yourScore =10;
    swap(myScore, yourScore);
    cout<<"My score is " << myScore<<endl;
    cout<<"Your score is "<<yourScore;


    return 0;
}