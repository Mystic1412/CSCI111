#include <iostream> 
using namespace std;
//2D ARRAYS
int main(){
    //sample question 1
    string seatingChart[5][10];

    //sample question 2
    int digits[2][5] ={{0,1,2,3,4},{5,6,7,8,9}};

    //sample question 3
    int data[2][4]={{3,1,4,1},{2,7,1,8}};
    cout<<data[1][1]<<endl; //7  

    //sample exercise 1 column by column
    for (int c =0; c<4;c++){
        for(int r=0; r<2; r++){
        cout<<data[r][c]<<" ";
        }
        cout<<endl;
    }

    //sample exercise 1 sums of rows of array
    int SumOfRow =0;
    for (int r=0; r<2;r++){
        for(int c=0; c<4;c++){
            SumOfRow += data[r][c];
        }
        cout<<"Sum: "<<SumOfRow<<endl;
    }
    return 0;
}