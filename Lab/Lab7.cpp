#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter a postive number: "<<endl;
    cin>>num;
    while (num<0){
        cout<<"enter a postive number: "<<endl;
        cin>>num;
    }

    return 0;
}