#include <iostream>
using namespace std;

int main(){
    int NYTemp, LATemp;
    cout<<"What is the temperature in Los Angeles? ";
    cin>>LATemp;
    cout<<"What is the temperature in New York? ";
    cin>>NYTemp;

    if (NYTemp > LATemp){
        cout<<"Liar!";
    }else{
        cout<<"You need to take a vacation";
    }
    return 0;
}