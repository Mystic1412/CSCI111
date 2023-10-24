#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void generateRand(){
    srand(time(0));
    cout<<rand()%100;
}

int main(){
    generateRand();
    return 0;
}