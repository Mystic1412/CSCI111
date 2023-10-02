#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"How old are you? ";
    cin>>age;
    while (age<0){
        cout<<"How old are you? ";
        cin>>age;
    }

    for (int counter=0; counter<age;counter++){
        cout<< "Hello ";
    }
    
    return 0;
}