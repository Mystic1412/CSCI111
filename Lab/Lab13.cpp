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

void count(int n){
    if (n==1){ 
        cout<<n<< " ";
    }else{
    count(n-1);
    cout<<n<<" ";
    }
}

void countDown(int n){
    if(n>0){
        cout<<n<<' ';
        countDown(n-1);
    }
}

int factorial(int x){
    if (x==1) return 1;
    return x*factorial(x-1);
}

int fibonacci(int n){
    int previous=0, current =1;
    if (n==0)return previous;

    fibonacci(n-1);
    
    
    return 0;
}

int main(){
    //lab 12 ex. 3
    cout<<has3(12643)<<endl;
    cout<<r(19683)<<endl;
    cout<<remove6(61123456)<<endl;
    cout<<remove6(6)<<endl;
    


    //Day 11/1/23
    count(10); //1 2 3 4 5 6 7 8 9 10
    cout<<endl;
    countDown(10);
    cout<<endl<<factorial(5)<<endl;
    return 0;
}