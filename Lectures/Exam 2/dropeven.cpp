#include <iostream> 
using namespace std;

int dropeven(int x){
    if (x<10){
        if (x%2==0) return 0;
        return x;}
    int last= (x%10);
    if ((last%2)==0){
        return dropeven(x/10);
    }
    return dropeven(x/10)*10+last;
}

int main(){
    dropeven(12345);
    return 0;
}