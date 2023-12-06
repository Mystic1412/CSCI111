#include <iostream>
#include <fstream>
using namespace std;

int main(){
    /* to write into a file
    ofstream f;
    f.open("test.txt");
    f<<"Hello"<<endl;
    f<<"World"<<endl;
    f.close();*/
    
    /* To read the files*/
    ifstream f;
    f.open("test.txt");
    while (!f.eof()){
        char x = f.get();//get next character
        cout<<x;
    }
    f.close();
    return 0;
}