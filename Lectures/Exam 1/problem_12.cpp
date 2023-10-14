#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of triangles you want: ";
    cin>>n;
    for(int t=1; t<=n; t++){
        for(int r=1;r<=n;r++){
            for(int c=1; c<=n;c++){
                if(c<=r && t%2==1){
                    cout<<"X";
                }else if(c>=r && t%2==0){
                    cout<<"*";
                }else{
                    cout<<" ";
                }
            }
            cout<<endl;
        }
        cout<<"-------"<<endl;
    }
    return 0;
}