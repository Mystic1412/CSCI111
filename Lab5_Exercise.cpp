#include <iostream>

using namespace std;

int main(){
    //Exercise 1
    int a = 24675;
    cout<< a%10<< endl;
    cout<< a/10<<endl;

    //Exercise 2
    int temp, pressure;
    cout<< "Enter Temperture: ";
    cin>>temp;
    cout<< "Enter Pressure: ";
    cin >> pressure;
    if (temp>=100 || pressure>=200) cout<<"WARNING!!\n";
    else cout<< "OK!\n";
    

    //Practice Problem 1 (While loops)
    int num=1, counter=0;
    while (num*num<100){
        cout<< num<<"^2 = "<<num*num<<endl;
        num +=1;
        counter +=1;
    }
    cout<<"The counter ran "<<counter<<" times.";

    //Practice Problem 2 (While loops)
    int x, sum;
    cout<<"Enter a number: ";
    cin>> x;
    counter = 0;
    while(x !=0){
        sum +=x;
        x-=1;
    }
    return 0;
}