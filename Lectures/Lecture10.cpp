#include <iostream>
#include <cmath> //#include <-- is to get a library <cmath> <-- this is a library
#include <cstdlib>
using namespace std;


/*What is a function in C++
- A function is a small piece of code to carry out a single useful task that you can call/use whenever the task is needed
- Function allows us to code once and use it many times*/

int main(){
    int x;
    cout<<"num:";
    cin>>x;
    cout<<sqrt(9); //sqrt of 9 function
    cout<<endl;

    for (int i=1; i<=10; i++){
        cout<<rand()%100<<endl; //rand is random
    }
    return 0;
}
