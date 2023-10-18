#include <iostream>
using namespace std;
void sayHello(){     //Void- The return type of a function that want to return nothing
    cout<<"Hello"<<endl;
}
/*Notes
We use different terms to refer input while coding the function and calling a function
 - argument = name of input when we call a function
 - parameter = name of input when we write a function
*/

double cube(double x){
    return x*x*x;
}

double power(double base, int power){
    double result=base;
    for (; power>1; power--){
        result = result*base;
    }
    return result;
}

double max(double x, double y){
    if (x>y)return x;
    else return y;
}
int main(){
    cout<<cube(1)<<cube(2)<<cube(3)<<endl;
    cout<<power(7, 4)<<endl;
    cout<<max (1.5, 2)<<endl; //--> 2
    cout<<max( 3.99, 4.01)<<endl; //--> 4.01

    return 0;
}