#include <iostream>
using namespace std;

int main(){
    int data[5][4]= {{4,6,7,3},{2,8,9,5},{3,5,8,9},{5,1,7,3},{3,8,0,3}};
    double average[5];
    for(int r=0; r<5;r++){
        int sum=0;
        for(int c=0;c<4;c++){
            sum += data[r][c];
        }
        average[r]= sum/4.0;
    }

    for(int r=0; r<5;r++){
        cout<<"The average of row "<<r<<": "<<average[r]<<endl;
    }
    return 0;
}