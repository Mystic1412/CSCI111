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

    //Previous example but using for loop instead

    for (counter=1; counter<=20; counter++){
        cout<<counter<<" x "<<num<<" = "<<num*counter<<endl;
    }
    return 0;
}