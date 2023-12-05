#include <iostream> 
using namespace std;
//* means pointer
//char* argv[] --> lets you input anynumber of arguments and makes it a c-string
int main(int argc, char* argv[]){
    cout<< argc<<endl;
    for (int i=0; i<argc; i++){
        cout<<argv[i]<<endl;
    }
    return 0;
    //output, title line, increment the function, recursion, array, title printing
}