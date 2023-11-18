#include <iostream>
using namespace std;

int maxCol(int a[][4], int x, int y){
    int max_col_sum=0, max_sum_col;
    for (int c=0; c<y;c++){
        int colsum=0;
        for (int r=0; r<x; r++){
            colsum=a[r][c];
        }
        if (max_col_sum==0 || colsum > max_col_sum){
            max_col_sum = colsum;
            max_sum_col = c;
        }
    }
    return max_sum_col;
}
int main(){
    int x[2][4] = { {-1, -2, 1, -3}, {-5, -6, -4, -7}};
    cout << maxCol(x, 2, 4) << endl; // prints 2
    // because the sum of column 2 is -3 = 1 - 4 which is larger than others
    return 0;

}