#include <iostream>
#include <ctime>
using namespace std;

int main(){
    int n =4;
    for (int r=n-1;r>=0;r--){
        for(int c= -(n-1); c<n; c++){
            if(c<-r||c>r||(c+r)%2!=0)cout<<" ";
            else cout<<"X";
        }
    cout<<endl;
    }
    cout<<0%2;
    return 0;
}

