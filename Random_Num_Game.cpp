#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


int main(){
    srand(time(0));
    int min, max;
    cout<<"What is your range?";
    cin>>min>>max;

    int answer= min+rand()%max-min+1;
    
    
}