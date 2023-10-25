#include <iostream>
using namespace std;
int f(int x){
    if (x<=0)return 0; //base case
    return x+f(x-1); //recursive problem 
    //probelem won't work until they reach the base case then everything else can run
}
int first2(int x){
    if(x<100)return x;
    return first2(x/10);
}
int main(){
    //Recursion is a function calling itself to solve a simple form of the same problem
    //Any problem that can solved by a loop can use recursion functions to solve it
    cout<<f(4)<<endl;
    cout<<first2(3456)<<endl<<first2(7);
    return 0;

}