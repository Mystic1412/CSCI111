#include <iostream>
using namespace std;

int digitOpposite(int x, int y){
    if (x<=0)return 0;
    if ((x%10)%2==0&& (y%10)%2==1) return digitOpposite(x/10,y/10)+1;
    else if ((x%10)%2==1 && (y%10)%2==0) return digitOpposite(x/10,y/10) +1;
    else return digitOpposite(x/10,y/10);
}
/* ANSWER SHEET ANSWER IS WRONG!
int digit(int x, int y){
    if(x<=0)return 0;
    if (x%2==y%2)return digit(x/10, y/10);
    return digit(x/10,y/10);
}
*/
int main(){
    cout<<digitOpposite(17345, 97813)<<endl;
    cout<<digitOpposite(13579,24680)<<endl;
    return 0;
}