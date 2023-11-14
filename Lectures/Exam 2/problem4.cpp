#include <iostream>
using namespace std;
int rotateDigits(int x){
    if (x<10)return x;
    int y=x%10;
    x=rotateDigits(x/10);
    int z =x%10;
    return (x/10)*100+10*y+z;
}
int main(){
    cout<<rotateDigits(968)<<endl;
}