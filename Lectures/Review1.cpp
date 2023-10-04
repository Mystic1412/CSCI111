//1 output, 2q for making a complete cpp program, 1 patten
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    // 8 9 RM 017 4 question: 1 output question, 2 complete programs; 1 pattern 1 not,  
    /*
       X
      XX
     XXX
    XXXX
    */
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for (int r=1; r<=2*n-1; r++){
        for(int c=1; c<=n; c++){
            if (r+c>=n+1&&r-c<=n-1){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }


    return 0;
}