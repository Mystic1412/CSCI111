#include <iostream>
using namespace std;

int countOdd(int n){
    if (n<=0)return 0;
    int rc =countOdd(n/10), lastdigit = n%10;
    if (lastdigit%2 == 1){
        return rc+1;
    }
    return rc;
}
int main(){
    cout<<countOdd(90)<<endl;
    cout<<countOdd(111)<<endl;
    cout<<countOdd(1234567)<<endl;
    return 0;
}