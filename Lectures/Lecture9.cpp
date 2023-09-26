#include <iostream>
using namespace std;

int main(){
    for (int r=1; r<=5;r++){
        for(int c=5;c>=r; c--){
            cout<<"*";
        }
        
        cout<<endl;
    }
    //upside down triangle
    for (int r=1; r<=5; r++){ //the row
        for(int c=9;c>0;c--){ //the colums
            if(c+r>=6 && c<=r+4){
               cout<<" "; 
            }
            else{cout<<"*";}
        }
        cout<<endl;
    }

    //right side up triangle
    for (int r=1; r<=5; r++){ //the row
        for(int c=1;c<=9;c++){ //the colums
            if(c+r>=6 && c<=r+4){
               cout<<"*"; 
            }
            else{cout<<" ";}
        }
        cout<<endl;
    }
}