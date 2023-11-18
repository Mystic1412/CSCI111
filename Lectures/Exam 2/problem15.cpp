#include <iostream>
using namespace std;

int advance(int a[],int x){
    int temp=a[x-1];
    for (int i=x; i>0-1;i--){
        a[i]=a[i-1];

    }
    a[0]=temp;
    return 0;
}
int main(){
    int x[5]={3,1,4,1,5};
    advance(x,5);
    cout<<x[0]<<x[1]<<x[2]<<x[3]<<x[4]<<endl;
    return 0;
}