#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"What is n?: ";
    cin>> n; //pt (a)

    for (int r=1; r<=2*n-1; r++ ){//pt(b)
        for(int c=1;c<=n;c++){
            if (c <=r && c <= 2*n-r)cout<<"*";
        }
        cout<<endl;
    }
}