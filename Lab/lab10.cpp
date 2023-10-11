#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int difsq(int a, int b){
        int result=(a*a)-(b*b);
        return result;
}
int avg(int x, int y){
    double average;
    average = (x+y)/2;
    return average;
}

int main(){

    cout<<"Exercise 1"<<endl;
    srand(time(0));
    cout<<10+rand()%(99-10+1)<<endl;
    
    //------------------------------------------

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
    cout<<"Total number of one rolled: "<<one<<endl;

    //------------------------------------------

    cout<<endl<<"Exercise 3"<<endl;
    bool b=true; int i=1; double d=0; string s=""; char c='1';
    //cout<<function(function(b,s,c),"Hello",c)<<endl;
    //return type FunctionName(input argument)
    //function(bool ,string y ,char  )
    cout<<difsq(2,2)<<endl;

    cout<<avg(12, 12)<<endl;


    return 0;
}