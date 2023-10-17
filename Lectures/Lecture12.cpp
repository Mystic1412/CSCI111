#include <iostream>
using namespace std;
void sayHello(){     //Void 
    cout<<"Hello"<<endl;
}

double cube(double x){
    return x*x*x;
}
int main(){
    cout<<cube(1)<<cube(2)<<cube(3);
    return 0;
}
