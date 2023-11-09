#include <iostream>

using namespace std;
int max(int arr[], int size){
        int m=arr[0];
        for (int i=0; i<size; i++){
            if (arr[i]>m)m=arr[i];
            
        }
        return m;
}

int max2d(int arr[][3],int r_num, int c_num){
    int m=arr[0][0]; 
    for (int r=0; r<r_num;r++){
        for(int c=0; c<c_num; c++){
            if(arr[r][c]>m)m=arr[r][c];
        }
    }
    return m;
}
int main(){
    int data[3][5]={{3,6,4,1,5},{9,2,6,5,3},{5,8,9,7,8}};

    int max_c = 0, max_c_sum =0;
    for (int c=0; c<5;c++){
        int sum=0;
        for (int r=0; r<3;r++){
            sum+=data[r][c];
        }
        if (sum>max_c_sum){
            max_c_sum =sum;
            max_c=c;
            cout<<sum<<endl<<max_c<<endl;
        }
    }

    int a[5]= {3,1,4,1,5};
    cout<<max(a,5)<<endl;//5
    cout<<max2d(b,2,3)<<endl;//9

    return 0;
}