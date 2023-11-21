#include <iostream> 
using namespace std;

double average(int a[][5], int rn, int cn){
    int total =0;
    for(int r=0; r<rn;r++){
        for(int c=0;c<cn;c++){
            total += a[r][c];
        }
    }
    return total*1.0/(rn*cn);// or total/ (double)(rn*cn) 
}

void calc_avg(double a[], int b[][5], int rn, int cn){
    for (int c=0;c<cn;c++){
        double total = 0.0;
        for(int r=0; r<rn; r++){
            total += b[r][c];
        }
        a[c]=total/rn;
    }
}

int max(double a[],int size){
    int mi=0;
    for(int i=0; i<size;i++){
        if (a[i]>a[mi])mi=i;
    }
    return mi;
}
void curve(double a[], int size, int ec){
    for (int i=0; i<size;i++){
        a[i]+=ec;
    }
}
int main(){
    //📝 REVIEW 
    string names[5] = {"Alex", "Freddy", "Jack","Kelly", "Max"};
    int scores[3][5] = {
    {40,50,60,60,80},
    {70,40,60,50,70},
    {60,50,60,70,90}};

    cout<<"Average of all scores: " <<average(scores, 3, 5)<<endl;

    double averages[5];

    calc_avg(averages, scores, 3,5);

    int max_i = max(averages,5);

    cout<<names[max_i]<<" got the highest average. \n";
    curve(averages,5,10);
    cout<<names[2]<<" got "<<averages[2]<<" after curve. \n";

    cout<<endl<<endl<<endl;
    //-------------------------------------------------------------------------------

    /* Text in C++
    - char      stores a single character
    - string    stores a sequence of characters
    - char[]    also known as c=string stores a sequence of characters from the C language

    RECALL:
    - char      values are always written in '' single quotes.
    -string     values are always written in "" double quotes.
    */
   char x = 'H';
   string s="Hello", s1="Queens College", s2= "How are you?", s3 = " ", s4="A";

   char arr[5] ={'H','e','l','l','o'};   //1D character array
   char arr2[5]={'W','o','r','l','d'};

   //❌arr ≠ arr2 can only change by going through each entry one by one

   s1 = s2; // ✔

   cout<<s1<<endl;

   char cs[]="Hello"; //the capacity will be 6
   char cs2[]={'W','o','r','l','d','\0'}; //\0 is null
   cout<<cs<<" "<<cs2<<endl; //Hello World
   cout<<arr<<endl;

    return 0;
}