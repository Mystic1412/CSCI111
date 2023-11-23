#include <iostream>
using namespace std;

int main(){
    int data[5][3] = {{4,6,1},{7,1,9},{3,7,8},{9,6,6},{5,3,8}};
    int maxSum=0,maxRow =0;
    for(int r=0; r<5;r++){
        int sum=0;
        for(int c=0;c<3;c++){
            sum += data[r][c];
        }
        if(maxSum<sum){
            maxSum = sum;
            maxRow = r;
        }
    }
    cout<<"The max row is "<<maxRow<<endl;
    return 0;
}