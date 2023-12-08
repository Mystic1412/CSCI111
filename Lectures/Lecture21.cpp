//Command Line argument

#include <iostream>
using namespace std;
//char* is a pointer
int main(int argc, char* argv[]){
    cout<<argc<<endl;
    for (int i =0; i<argc; i++){
        cout<<argv[i]<<endl;
    }
    return 0;
}