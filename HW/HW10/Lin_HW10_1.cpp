#include <iostream>
using namespace std;
void printReverseString(string x){
    string ReversedName;
    for (int i= x.size()-1; i>=0; i--){
        ReversedName += x[i];
    }
    cout<<ReversedName<<endl;
}

string reverseString(string &x){
    string ReversedName;
    for (int i= x.size()-1; i>=0; i--){
        ReversedName += x[i];
    }
    x = ReversedName;
    return x;
}
int main(){
    string name;
    cout<<"Enter your name: ";
    cin>>name;

    //reverse the name but don't change the variable
    cout<<"String in reverse:\n";
    printReverseString(name);

    //To check that the variable is not changed
    cout<<"Current value of name:\n";
    cout<<name<<endl;

    //To check that the variable is changed
    reverseString(name);
    cout<<"Current value of name:\n";
    cout<<name<<endl;
    return 0;
}