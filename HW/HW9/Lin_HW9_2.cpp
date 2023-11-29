#include <iostream>
using namespace std;
//funciton,
bool search2d(int array[][3],int r, int c, int num){
    for (int row=0; row<r; row++){
        for(int col=0; col<c;col++){
            if(array[row][col]==num){
                return true;
            }
        }
    }
    return false;
}
    
int main(){
    int TestArr[4][3]={{1,2,2},{3,4,5},{6,7,7},{3,7,1}};
    cout<<"Number found: "<<search2d(TestArr,3,3,0);
    return 0;
}