#include <iostream>
using namespace std;

int main(){
    string day;
    cout<<"What day is it? ";
    cin>>day;

    if (day=="Tuesday" || day =="Thursday"){
        cout<<"You have a CS111 class today.";
    }
    else{
        cout<<"No CS111 today!";
    }
    return 0;
}