#include <iostream>
using namespace std;
void cheers(int n){
    if(n<=1){
        cout<<"Hurray\n";
        return;
    }
    if (n>1){
        cout<<"Hip ";
    }
    cheers(n-1);
    
    
}
int main(){
    cheers(3);
    return 0;
}