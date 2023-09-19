#include <iostream>
using namespace std;
//For loops

int main(){
/*
for(set up counter; testing counter; change counter){
    Instruction(s) to repeat;
}
 
 int x=10;
 while(x>0){
     cout<<x<<" Hello\n";
     x--;}
*/ 
int x;
cout<<"Enter a number: ";
cin>>x;
for (x; x>0; x=x/10){
    cout<<x%10<<endl;
}
cout<<endl;

//prints the squared till 20
for (x=1; x <=20; x++){
    cout<<x<<" x "<<x<<" = "<<x*x<<endl;
}

//prints odd #s
for (x=1; x<=20; x++){
    if (x%2 != 0){
        cout<<x<<" ";
    }
}

cout<<endl;

for (x=1; x<=15; x++){
    cout<<".";
}


for (x=1; x<=20; x++){
    //a row of 5 "*"
    for (int i; i<=x; i++){
        //print 1 *s
        cout<<"*";
    }
} 
return 0;
}