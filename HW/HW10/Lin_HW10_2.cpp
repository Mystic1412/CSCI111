#include <iostream>
using namespace std;
string lowerCaseString(string &x){
     for(int i =0; i<x.size(); i++){
        if (x[i] >= 65 && x[i]<=90) {
            x[i] = x[i]+32;
        }
     }
     return x;
}

string upperCaseString(string &x){
    for(int i =0; i<x.size(); i++){
        if (x[i] >= 97 && x[i]<=122) {
            x[i] = x[i]-32;
        }
     }
     return x;
}

string undulatingString(string &x){
    for(int i =0; i<x.size(); i++){
        if(i%2 == 0){
            if (x[i] >= 65 && x[i]<=90) {
            x[i] = x[i]+32;
        }
        }
    }
    return x;
}
int main(){
    string s;
    cout<<"Type something: ";
    cin>>s;

    lowerCaseString(s);
    cout<<"Fully lower case:\n";
    cout<<s<<endl;

    upperCaseString(s);
    cout<<"Fully upper case:\n";
    cout<<s<<endl;

    undulatingString(s);
    cout<<"Undulating case:\n";
    cout<<s<<endl;
    return 0;
}