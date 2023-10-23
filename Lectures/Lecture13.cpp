#include <iostream>
using namespace std;
double (doSomething)(string x, char c, string y, int a, int b){
    return 0;

}

int function(bool True, string x, char i){
    return 0;
}

void greet(string x){
    cout<<"Hello "<< x <<endl;
}

int max3(int x, int y, int z){
    if(x<y) x=y;
    if (x<z)x=z;
    return x;
    
}

void update(int &n){
    cout << "IN UPDATE: Value of n: "<< n << endl;
    n=0;
    cout << "IN UPDATE: Value of n again: "<< n << endl;
}

void makeChange(int &x, int y){
    y=x+y;
    x=y;
}
int main(){
    //practice 1
    string name ="John";
    char initial ='Q';
    int age = 20;
    double rating = doSomething(name, initial, name, age, age+10);
    cout<<rating<<endl;

    //practice 2
    bool b=true; int i=1; double d=0; string s=""; char c=1;
    cout<<function(function(b, s, c), "Hello", c)<<endl;

    //practice 3
    greet("John");

    //practice 4
    int l, g,o;
    cout<<"Enter 3 integers: ";
    cin>> l>>g>>o;
    cout<<"Your maximum number is " <<max3(l,g,o)<<endl;

    int n = 100;
    cout << "Value of n: "<< n << endl;
    update(n);
    cout << "Value of new n: "<< n << endl;

    int a=5, e=6;
    makeChange(a,e);
    cout<<a<<" "<<b<<endl;

    a=5, e=6;
    makeChange(a,e+3);
    cout<<a<<" "<<b<<endl;
    //can't do equtions in refrences[&x]

    //function(x, y) x is usually called L-value and y is called r-value (just which side they're on doesn't have to be x or y)
    return 0;
    }

