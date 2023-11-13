#include <iostream>
using namespace std;
//WHILE LOOPS
int main(){
    //example of while loop
    int x=1;
    while (x<=10){
        cout<<x<<endl;
        x++;
    }

    //practice 1
    int num=1;
    while (num>0&& (num*num) <=100)
    {
        cout<<num<<" "<< num*num <<endl;
        num++;
    }
    
    

    //practice 2
    int sum=0;
    num =123;
    while (num!=0){

        sum += num%10;
        num /=10; 
    }
    cout<<sum<<endl;
    
    return 0;
}