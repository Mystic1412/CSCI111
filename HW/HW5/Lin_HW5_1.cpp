#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

double CoinFlip(double flips){
    srand(time(0));
    double head=0, tail=0, numflip=flips;
    for (; flips>0; flips--){
        int flip = rand()%2;
        if(flip==0){
            tail++;
        }
        else{
            head++;
        } 
        
    }
    cout<<endl;
    cout<<"Probability of heads given "<<numflip<< " tosses = "<< head/numflip<<endl;
    cout<<"Probability of tails given "<<numflip<< " tosses = "<< tail/numflip<<endl;
    return 0;
}

int main(){

    CoinFlip(10);
    CoinFlip(100);
    CoinFlip(1000);
    CoinFlip(5000);
    
    return 0;
}