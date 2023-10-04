#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int t= rand()%1001+1000;
    cout<<t;
    for (int x=1;x<=t; x++){
        if (x*x%100==61){
            cout<<x<<endl;
        }
    }
    
    return 0;
}