#include <iostream>
#include <cmath> //#include <-- is to get a library <cmath> <-- this is a library
#include <cstdlib> //give random
#include <ctime> //time library
using namespace std;


/*What is a function in C++
- A function is a small piece of code to carry out a single useful task that you can call/use whenever the task is needed
- Function allows us to code once and use it many times*/

int main(){
    int t = time(0); //time is in seconds
    srand(time(0)); //srand lets you put a number for the random function //time(0) 0 means null
    cout<<sqrt(9); //sqrt of 9 function
    cout<<endl<<endl;
    cout<<"time = "<<t; 
    cout<<"time = "<<t/60.0/60/24/365.25<<" years since 1970";
    cout<<endl<<endl;

    for (int i=1; i<=10; i++){
        cout<<rand()%10<<endl; //rand is random
    }
    
    return 0;
}
