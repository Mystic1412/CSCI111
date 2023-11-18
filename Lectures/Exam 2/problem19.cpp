#include <iostream>
using namespace std;
int maxRow(int a[][5], int x, int y){
    int max_pos_row =0, row_num=0;
    for(int r=0; r<x; r++){
        int pos_counter=0;
        for (int c=0; c<y;c++){
            if (a[r][c]>0){
                pos_counter++;
            }
        }
        if (max_pos_row <pos_counter){
            max_pos_row = pos_counter;
            row_num = r;
        }
    }
    return row_num;
}
int main(){
    int x[2][5] = { {-1, -2, 1, -3, 5}, {-5, -6, -4, -7, -8}};
    cout<< maxRow(x, 2, 5) << endl; // prints 0
    // because row 0 has two positive entries and row 1 has none
    return 0;
}