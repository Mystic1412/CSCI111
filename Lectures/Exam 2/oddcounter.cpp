#include <iostream>
using namespace std;

int countOdd(int x){
    int Oddcounter=0;
    int rc = countOdd(x/10);
    if (x<10)return x;
    
    if((x%10)%2 ==1){
        Oddcounter++;
    }
    else{ 
    

    if (((rc%10) %2) ==1){
       Oddcounter++; 
    }}
    return Oddcounter;
    }

int main(){
    cout<<countOdd(90)<<endl; // 1
    cout<<countOdd(111)<<endl; // 3
    cout<<countOdd(11242)<<endl; // 3
    return 0;
}