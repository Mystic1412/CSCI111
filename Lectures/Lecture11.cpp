#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//make your funciton after namespace and before int main()

/*
[result type] [funtion name] (define inputs){ <-- title name
    //code
}
*/

double sq(double x){
    double answer= x*x;
    return answer;
}

double multi(double x, double y){
    double answer = x*y;
    return answer;
}

int main(){
    srand(time(0));
    int a, b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;

    for(int i=1; i<=3; i++){
        cout<<rand()%(b-a+1)+a<<endl;
    }   
    cout<<endl<<endl;
    //-----------------------

    int numHead=0;

    while (numHead<5){
        int flip= rand()%2;
        if (flip == 1){
            numHead++;
            cout<<"H ";
        }
        else{cout<<"T ";}
        
    }
    cout<<endl<<endl;
   
   //-----------------------

   cout<<"Squared: "<<sq(4.2)<<endl;
   cout<<"Product: "<<multi(3,9)<<endl;

    return 0;
}