#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number between 100 and 9999: ";
    cin>>n;
    while (n<100 || n>9999){
        cout<<"Enter a number between 100 and 9999: ";
        cin>>n;
    }

    for (;n>0 ;n=(n/10)){
        cout<<n%10<<endl;
    }

    return 0;
}