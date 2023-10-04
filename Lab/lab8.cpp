#include <iostream>
using namespace std;
//Nested for loops
//half lab 8 half functions
int main(){

    cout<<endl<<"Exercise 2"<<endl;
    for (int r =1; r<=5;r++){
        for(int c=1;c<=5;c++){
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<endl<<"Exercise 3"<<endl;

    for (int r=1; r<=5;r++){
        for(int c=1; c<=r; c++){           
            cout<<"*";
        
        }
        cout<<endl;
    }

    cout<<endl<<"Exercise 4"<<endl;

    //Exercise 4
    for (int r=5; r>=0;r--){
        for(int c=1; c<=r; c++){           
            cout<<"*";
        }
        cout<<endl;
    }
    //or
    cout<<endl;
    for (int r=1; r<=5;r++){
        for(int c=1; c+r<=5+1; c++){           
            cout<<"*";
        
        }
        cout<<endl;
    }

    //Exercise 5
     cout<<endl<<"Exercise 5"<<endl;
    for(int r=1; r<=7;r++){
        for(int c=1; c<=5;c++){
            cout<<"*";
        }
        cout<<endl;
    }

    //Exercise 6
    cout<<endl<<"Exercise 6"<<endl;
    for(int r=1; r<=5;r++){
        for(int c=1; c<=5;c++){
            if (c==3){
                cout<<"0";
            }else{
                cout<<"X";
                }
        }
        cout<<endl;
    }

    //Exercise 7
    cout<<endl<<"Exercise 7"<<endl;
    for(int r=1; r<=5;r++){
        for(int c=1; c<=5;c++){
            if (c==3 || r==3){
                cout<<"0";
            }else{
                cout<<"X";
                }
        }
        cout<<endl;
    }

    //Exercise 8
    cout<<endl<<"Exercise 8"<<endl;
    for(int r=5; r>=1;r--){
        for(int c=1; c<=5;c++){
            if (c==r){
                cout<<"0";
            }else{
                cout<<"X";
                }
        }
        cout<<endl;
    }

    //Exercise 9
    cout<<endl<<"Exercise 9"<<endl;
    for(int r=5; r>=1;r--){
        for(int c=1; c<=5;c++){
            if (c+2==r){
                cout<<"0";
            }else{
                cout<<"X";
                }
        }
        cout<<endl;
    }

    //Exercise 10
    cout<<endl<<"Exercise 10"<<endl;
    for(int r=5; r>=1;r--){
        for(int c=1; c<=5;c++){
            if (c+r==6 ||r==c){
                cout<<"X";
            }else{
                cout<<" ";
                }
        }
        cout<<endl;
    }

    //Exercise 11
    cout<<endl<<"Exercise 11"<<endl;
    for(int r=1; r<=5;r++){
        for(int space=1; space+r<=5;space++){
                cout<<" ";          
        }
        for(int x=1; x<=2*r-1;x++){
            cout<<"X";
        }
        cout<<endl;
    }
    return 0;
}