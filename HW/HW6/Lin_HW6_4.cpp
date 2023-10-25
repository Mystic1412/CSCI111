#include <iostream>
using namespace  std;

void minMaxMath(int x, int y, int z){
    int sum, product, LargeNum=x, SmallNum=x;
    sum = x+y+z;
    product = x*y*z;

    //find the largest number
    if (LargeNum<y)LargeNum = y;
    if(LargeNum<z)LargeNum = z;

    //find the smallest number
    if(SmallNum>y) SmallNum=y;
    if(SmallNum>z) SmallNum=z;
    
    cout<<"The sum is "<<sum<<endl;
    cout<<"The product is "<< product<<endl;
    cout<<"The largest number is "<< LargeNum<<endl;
    cout<<"The smallest number is "<< SmallNum<<endl;
}
int main(){
    int a = 7, b =2, c =4;
    minMaxMath(a,b,c);
    return 0;
}
