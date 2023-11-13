#include <iostream>
using namespace std;
//1D Arrays
int main(){
    string senate[100];
    int digits[10]={0,1,2,3,4,5,6,7,8,9};
    int data[4]={3,1,4,1};
    cout<<data[2]<<endl; //output 4

    for(int i=0; i<10; i++){
        cout<<digits[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<10; i++){
        digits[i]+=5;
        cout<<digits[i]<<' ';
    }
    return 0;
}