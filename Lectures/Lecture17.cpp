#include <iostream>
using namespace std;

int main(){
    string names[5]= {"Alex", "Freddy", "Jack","Kelly","Max"};
    int score[5];
    for (int i =0; i<5; i++){
        cout<<"Enter the score for "<<names[i]<<": ";
        cin>>score[i];
    }
    int total =0;
    for(int i=0; i<5;i++){
        total += score[i];
    }
    double average = total/5;
    for(int i=0; i<5;i++){
        if(score[i]>average){
            cout<<names[i]<<": "<<score[i]<<endl;
        }
    }
    int max_idx=0;
    for(int i=0; i<5; i++){
        if (score[i]>score[max_idx]){
            max_idx = i;
        }
    }
    cout<<names[max_idx]<<" has max score: "<<score[max_idx]<<endl;

    /*2d array
    datatype [name] [num_of_rows][num_of_cols];

    Initialized:
    = [init.row 0], [init. row 1],...,[init.last row];

    to process the elements in a 2-d array with a nested for loop.
        - either outer loop does rows, inner loop does collumns
        - or outer loop does rolumns, inner loop does rows
    */

   int data[3][5] = {{3,6,4,1,5},{9,2,6,5,3},{5,8,9,7,8}};
   /*
   ________________
   |3 |6 | 4 |1 |5 | = 19
   |9 |2 | 6 |5 |3 | = 25
   |5 |8 | 9 |7 |8 | = 37 <-- max row
   |_______________|
   */
    int max_r=0, max_r_sum = 0;
    for (int r=0; r<3;r++){ //for each row

        int sum=0; //we want to calculate the sum
        for (int c=0; c<5;c++){
            sum+= data[r][c]; //adding all the entries to sum
        }
        if (sum>max_r_sum){ //check is current roww have the max sum if so we update if not move on.
            max_r_sum = sum;
            max_r = r;
        }
    }
    return 0;
}
