#include <iostream>
using namespace std;
#include <fstream>
int main(){
    /*substr(postion) - return substring of the string starting at postioin 
    substr(postion, amount) - return substring with amount char's starting at position
    EXAMPLE*/
    string s ="Hello";
    cout<<s.substr(2)<<endl; //llo
    cout<<s.substr(1,2)<<endl;//el
    /*FOR VOID:
    .erase(position, amount) - erase amount char's in the string starting at position
    .replace(position, amount, new text) - replace amount char's starting at position by text
    .insert(position, text) - insert text at position

    c_str() - gives the c-string verstion of the string.
    */
    s.erase(1,2);//hlo
    cout<<s<<endl;

    s.insert(1,"BYE"); //Hlo --> HBYElo
    cout<<s<<endl;

    s.replace(1,3,"el"); //Hello
    cout<<s<<endl;
    
    /*When do we use string and c-string?
    - You should always use string, unless you absolutely need a c-string.
    - c-string doesn't have methods, instead there are functions in <cstring>*/

    s= "Queens College";
    cout<<s.length()<<endl;         //14
    cout<<s.size()<<endl;           //14
    cout<<s.find("C")<<endl;        // 7
    cout<<s.find("e")<<endl;        // 2
    cout<<s.find("eg")<<endl;       // 11
    cout<<int(s.find("Hello"))<<endl<<endl;    // -1?
    
    ofstream f;
    f.open("test.txt");
    f<<"Hello"<<endl;
    f<<"Bye"<<endl;
    f.close();

    //Read from a file
    ifstream f;
    f.open("test.txt");
    if(!f.is_open()){
        cout<<"There is no such file!\n";
        return 0;
    }
    string x;
    // f>>x;
    // cout<<"Your file starts with "<<x<<endl;
    // f>>x;
    // cout<<"Your file goes on with "<<f<<endl;
    f.close();
    return 0;
}