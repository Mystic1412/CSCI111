#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int adjust(int a[],int x){
    for (int i=0;i<x; i++){
        a[i] = a[i]+((-2)+rand()%(2-(-2))+1);
    }
    return 0;
}
int main(){
    srand(time(0));
    int x[5]={3,1,4,1,5};
    adjust(x,5);
    cout<<x[1]<<endl;
    return 0;
}