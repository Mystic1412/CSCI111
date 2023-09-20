#include <iostream>
using namespace std;

int main() {
    int num, counter=1;
    cout<<"Enter a postive number: "<<endl;
    cin>>num;
    while (num<0){
        cout<<"enter a postive number: "<<endl;
        cin>>num;
    }

    while (counter<=20){
        cout<<counter<<" x "<<num<<" = "<<num*counter<<endl;
        counter++;

    }

    return 0;
}