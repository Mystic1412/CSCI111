#include <iostream>
using namespace std;

int main(){
    int x,y, counter=0;
    cout<<"Enter two postitive integers:";
    cin>>x >>y;
    counter=1;
    while ((x<=0|| y<=0)&& counter <3){
        cout<<"Your input is bad! Try again: ";
        cin>> x >>y;
        counter = counter +=1;
    }

    if (x<=0||y<= 0){
        cout<<"Your input is bad!"<<endl;
        cout<<"You ran out of attempts"<<endl;
    }else {
        cout<<"Sum: "<< x+y<< endl;
        cout<<"Product: "<<x*y<<endl;
    }
    

    // Repeat Decision a specific amout of times

    //Print cubes of 1,2...,10
    int c=0;
    while (c<10){
        cout<<"Hello\n";
        c++;
    }

    c=0;
    while (c<=10){
        cout<< c*c*c<<" ";
        c++;
    }
    cout<<endl;

    //Ask user for a (positive) number with at most 3 digits if user gives more digits, we chop off the extra digits. (only keeping the last 3 digits
    int n;

    cout<<"Enter a number: ";
    cin>>n;
    while (n>999){
        n/=10; //same as n=n/10   
    }
    cout<<"Your number is "<< n <<endl;


    //Ask user for a # (>0) then we print the # backwards

    int num;
    cout<<"Enter a  number: ";
    cin>> num;
    while (num>0){
        cout<< num%10<<endl;
        num/=10;
    }
    


    return 0;
}