#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int difsq(int a, int b){
        int result=(a*a)-(b*b);
        return result;
}
int main(){

    cout<<"Exercise 1"<<endl;
    srand(time(0));
    cout<<10+rand()%(99-10+1)<<endl;
    
    cout<<endl<<"Exercise 2"<<endl;
    int roll, one=0, die;
    cout<<"How many roll do you want? ";
    cin>>roll;

    if(roll<0){
        cout<<"We're not playing games";
        return 0;
    }

    for(int i=1;roll>=i; i++){
        die= 1+rand()%(6-1+1);
        cout<<"Roll "<<i<<": "<<die<<endl;  
        if(die==1){
            one+=1;
        }
    }
    cout<<"Total number of one rolled: "<<one;

    cout<<endl<<"Exercise 3"<<endl;
    
    cout<<difsq(2,2);

    return 0;
}