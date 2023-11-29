#include <iostream> 
using namespace std;
string middle(string x){
    int length = x.size();
    if(length<=2){
        return "";
    }
    x= x.substr(1,length-2);
    return x;
}
int main(){
    string s="hello";
    char t[]="hello";
    if(s==t) cout<<"s and t are equal"<<endl;
    else cout<<"s and t are not equal"<<endl;

    string name ="CUNY";
    cout<<name[2]<<endl;//print letter: N
    /*Strings have several pre-defined library funcitons avaiable
        - length() and size() return the number of characters in a string
        - insert() inserts a string inside another string at a specified location

        - substr()
        - find()
        - rfind()*/
    cout<<s.size()<<endl;//prints 5
    string str1 = "This is fun!", str2="a lot of ";
    //insert (position, string)
    str1.insert(8,str2);
    cout<<str1<<endl;//outputs: This is a lot of fun!
    //Exercise
    cout<<middle("keyboard");
    return 0;
}