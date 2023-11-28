#include <iostream>
using namespace std;
void countPrint(int array[], int length){
    for(int num=0; num<length;num++){
        int count=0;
        for (int i=0; i<length;i++){
            if(num== array[i]){
                count++;
            }
        }

        if(count!=0){
            cout<<num<<" has a count of "<< count<<endl;
        }
    }
int main(){
    int test[] = {0,1,7,3,7,2,1,1,0,2};
    countPrint(test, 10);
    return 0;
}