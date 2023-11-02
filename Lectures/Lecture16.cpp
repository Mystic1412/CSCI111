#include <iostream>
using namespace std;

void factors(int n){
    if(n==1) return;
    int f=2;
    while (n%f!=0){
        f++;
    }
    cout<<f<<" ";
    factors(n/f);
}
//---------------------------------------------
//Arrays
void reverseNums(int n){

}
int main(){
    factors(105);
    cout<<endl;

    //Arrays

    int a,b,c,d,e;
    cout<<"Enter 5 intergers: ";
    cin>>a>>b>>c>>d>>e;
    
    cout<<e<<" ";
    cout<<d<<" ";
    cout<<c<<" ";
    cout<<b<<" ";
    cout<<a<<" ";

    cout<<endl<<endl;
    int arr[5]; //<-- array just like how you name variables just they have []
    // arr       []      [  |  | |  |  ]
    //called index^      [0][1][2][3][4]
    for (int i=0; i<5; i++){
        cin>>arr[i];

    }
    for(int j = 4; j>=0; j--){
        cout<<arr[j]<<" ";
    }
    cout<<endl;


    /*Model:
                        int 
    variable = intx; x  [ ]

    array = int arr[5]; arr[ | | | | ]
          data  array[capacity]
          type  name  (must be define to a fix number)
                      (it should not be a variable)

    */

   int y=5; //y[5]<--int
   int B[3]= {1,2,3};// B[1 | 2 | 3]


   //Exercise
   int quiz[5];
   cout<<"Enter 5 scores: ";
   for (int i=0; i<5;i++){
    cin>>quiz[i];
   }
   int total =0;
   for(int i=0; i<5; i++){total +=quiz[i];}
   double average = total/5.0;
   cout<<endl;
   for(int i=0; i<5; i++){
    if (average>quiz[i]){
        cout<<quiz[i]<<endl;
    }
   }

    return 0;
}