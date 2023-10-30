#include <iostream>
using namespace std;

//Recursion

bool has3(int x){
    if (x<=0) {return false;}
    return has3(x/10) || x%10==3;
}
int r(int n){
    if (n<100){
        return n%10;
    }
    return 10*r(n/100)+n%10;
}

int remove6(int x){
    if(x<=0) return 0;

    if (x%10 == 6) return remove6(x/10);
    if (x<10)return x;
    return 10*remove6(x/10) +x%10; 
}

int main(){
    //lab 12 ex. 3
    cout<<has3(12643)<<endl;
    cout<<r(19683)<<endl;
    cout<<remove6(61123456)<<endl;
    cout<<remove6(6)<<endl;
    return 0;
}