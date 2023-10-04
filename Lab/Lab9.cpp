#include <iostream>
using namespace std;
#include <ctime>
#include <cstdlib>
#include <cmath>
//Learning abt Functions today 
int main(){
    srand(time(0));

    //Exercise 1
    int num;
    cout<<"Enter a positive number: ";
    cin>>num;
    cout<<sqrt(num)<<endl;

    //how to get a random number from a range
    //min+rand()%(max-min+1)
    for(int i=1;i<=20;i++){
        cout<<35+rand()%(90-35+1)<<endl;
    }
    return 0;
}