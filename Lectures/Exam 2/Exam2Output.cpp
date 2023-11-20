#include <iostream>
using namespace std;
void rec(int n){
    cout<<n%5;
    if (n==0)return;
    rec(n/5);
}
int fun(int &x, int y){
    if (y<=0)return x;
    x = x+1;
    y=y+1;
    cout<<x<<y<<endl;
    return x+y;
}
int main(){
    int x[5]={2,7,1,8,2}, a=3,b=1;
    cout<<x[x[4]]<<endl;
    for (int i =a;i>b; i--){cout<<x[i];}cout<<endl;
    rec(111);cout<<endl;
    fun(a,b); cout<<a<<b<<endl;
    cout<<fun(a,b)<<endl;
    return 0;
}